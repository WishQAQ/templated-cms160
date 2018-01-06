<a href="[field:arcurl/]">
                	<img width="238" height="166" src="[field:picname/]">
                	<p style="bottom: -65px;">
                        <span>[field:title/]</span>
                       <font>[field:infos function="cn_substr(Html2text(@me),30)"/]...</font>
                    </p> 
                    <b style="bottom: -65px;"></b>   
                </a>
         [field:global name=autoindex runphp="yes"](@me ==4)? @me="</div><div class='case_a_cont'>":@me="";[/field:global]