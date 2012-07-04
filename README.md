#File Filter
------------

**File Filter** is a Drupal module that adds a text format filter to convert file placeholders into absolute paths or image style elements. This approach tries to help streamline and future-proof the process when adding inline images into the body fields or text areas. Links to files are regenerated when the cache is cleared and the content is save or updated.

##Example

**The following:**

<pre>
Lorem ipsum dolor sit amet, consectetur adipisicing elit.

[fid:42:absolute]

[fid:42:image:medium]

Ut enim ad minim veniam, quis nostrud exercitation.
</pre>

**will be converted to:**

<pre>
Lorem ipsum dolor sit amet, consectetur adipisicing elit.

http://example.com/sites/default/files/images/path/example.jpg

&lt;img typeof=&quot;foaf:Image&quot; src=&quot;http://example.com/sites/default/files/images/path/example.jpg&quot;&gt;

Ut enim ad minim veniam, quis nostrud exercitation.
</pre>