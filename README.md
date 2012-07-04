#File Filter
------------

**File Filter** is a Drupal module that adds a text format filter to convert file placeholders into absolute paths or image style elements. This approach tries to help streamline and future-proof the process when adding inline images into the body fields or text areas. Links to files are regenerated when the cache is cleared and the content is save or updated.

##Example

**The following:**

<pre>
Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

[fid:42:absolute]

[fid:42:image:medium]

Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.
</pre>

**will be converted to:**

<pre>
Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

http://example.com/sites/default/files/images/style/path/example.jpg

<img typeof="foaf:Image" src="http://example.com/sites/default/files/images/style/medium/path/example.jpg">

Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.
</pre>