.. code-block:: c++
	:linenos:

public array external group class test_group
{
	public external test_group   left;
	public external test_group   right;
	public shared int        count;
	public shared queue      q;
	public shared test_group tgs;
	public        char     []name;
	public external copy test_group []children() {
		int i = 0;
		if (left != null )
			i++;
		if (right != null )
			i++;
		test_group []ret;
		ret = create test_group[i];
		if ( i == 0 )
			return ret;
		i = 0;
		if ( left != null )
			ret[i++] = left;
		if (right != null )
			ret[i++] = right;
		return ret;
	}
	public external test_group() {
		if ( q == null )
		q = create queue();
		q <=> {
		count++;
		char []n = "";
		name     = n + count;
		left     = null;
		right    = null;
	}
}
