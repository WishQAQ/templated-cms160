<a href="[field:arcurl/]" target="_blank">
                	<img src='[field:picname/]' width="238" height="166">
                	<p>
                        <span>[field:title/]</span>
                       <font>[field:infos function="cn_substr(Html2text(@me),30)"/]...</font>
                    </p> 
                    <b></b>   
                </a>
               [field:global name=autoindex runphp="yes"](@me ==4)? @me="</div><div class='case_a_cont'>":@me="";[/field:global]