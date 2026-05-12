<html>
<head>
<title>FinalProject.cpp</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<style type="text/css">
.s0 { color: #b3ae60;}
.s1 { color: #bcbec4;}
.s2 { color: #6aab73;}
.s3 { color: #cf8e6d;}
.s4 { color: #bcbec4;}
.s5 { color: #2aacb8;}
.s6 { color: #7a7e85;}
</style>
</head>
<body bgcolor="#191a1c">
<table CELLSPACING=0 CELLPADDING=5 COLS=1 WIDTH="100%" BGCOLOR="#606060" >
<tr><td><center>
<font face="Arial, Helvetica" color="#000000">
FinalProject.cpp</font>
</center></td></tr></table>
<pre><span class="s0">#include </span><span class="s2">&lt;iomanip&gt;</span>
<span class="s0">#include </span><span class="s2">&quot;tictactoe.h&quot;</span>
<span class="s0">#include </span><span class="s2">&lt;string&gt;</span>

<span class="s3">using namespace </span><span class="s1">std</span><span class="s4">;</span>

<span class="s3">int </span><span class="s1">main</span><span class="s4">() {</span>


    <span class="s3">int </span><span class="s1">xMove</span><span class="s4">;</span>
    <span class="s3">char </span><span class="s1">menu</span><span class="s4">;</span>

    <span class="s1">TicTacToe</span><span class="s4">* </span><span class="s1">play </span><span class="s4">= </span><span class="s3">new </span><span class="s1">TicTacToe</span><span class="s4">();</span>


    <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">10</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">60</span><span class="s4">, </span><span class="s2">'-'</span><span class="s4">) &lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
    <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">34</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s2">&quot;TIC TAC TOE&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
    <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">10</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">60</span><span class="s4">, </span><span class="s2">'-'</span><span class="s4">) &lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>


    <span class="s3">for </span><span class="s4">(</span><span class="s3">int </span><span class="s1">j </span><span class="s4">= </span><span class="s5">0</span><span class="s4">; </span><span class="s1">j </span><span class="s4">&lt; </span><span class="s5">3</span><span class="s4">; </span><span class="s1">j</span><span class="s4">++) {</span>
        <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">25</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s2">&quot;|&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">25</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt;  </span><span class="s2">&quot;|&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
        <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">18</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s1">j </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">6</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s2">&quot;|&quot;</span>
             <span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">12</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s1">j </span><span class="s4">+ </span><span class="s5">3 </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">12</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s2">&quot;|&quot;</span>
             <span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">6</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s1">j </span><span class="s4">+ </span><span class="s5">6 </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">18</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
        <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">25</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s2">&quot;|&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">25</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt;  </span><span class="s2">&quot;|&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
        <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">10</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">15</span><span class="s4">, </span><span class="s2">'-'</span><span class="s4">) &lt;&lt; </span><span class="s2">&quot;T&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">25</span><span class="s4">, </span><span class="s2">'-'</span><span class="s4">) &lt;&lt; </span><span class="s2">&quot;T&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">15</span><span class="s4">, </span><span class="s2">'-'</span><span class="s4">) &lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>

    <span class="s4">}</span>

    <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">endl </span><span class="s4">&lt;&lt; </span><span class="s2">&quot;Welcome to the TicTacToe!&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">endl </span><span class="s4">&lt;&lt; </span><span class="s2">&quot;Your are player X! &quot; </span><span class="s4">&lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>


    <span class="s3">do </span><span class="s4">{</span>

        <span class="s3">int </span><span class="s1">counter </span><span class="s4">= </span><span class="s5">0</span><span class="s4">;</span>
        <span class="s3">bool </span><span class="s1">gameOver </span><span class="s4">= </span><span class="s3">false</span><span class="s4">;</span>

        <span class="s3">do </span><span class="s4">{</span>

            <span class="s3">try </span><span class="s4">{</span>
                <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">endl </span><span class="s4">&lt;&lt; </span><span class="s2">&quot;Please enter the number of the position you wish to take from 0-9: &quot;</span><span class="s4">;</span>
                <span class="s1">cin </span><span class="s4">&gt;&gt; </span><span class="s1">xMove</span><span class="s4">;</span>
                <span class="s3">if </span><span class="s4">(</span><span class="s1">xMove </span><span class="s4">&lt; </span><span class="s5">0 </span><span class="s4">|| </span><span class="s1">xMove </span><span class="s4">&gt; </span><span class="s5">8</span><span class="s4">) {</span>
                    <span class="s3">throw </span><span class="s4">(</span><span class="s2">&quot;Sorry, the value you entered is incorrect. Please try again.&quot;</span><span class="s4">);</span>
                <span class="s4">}</span>
            <span class="s4">}</span>

            <span class="s3">catch </span><span class="s4">(</span><span class="s3">const char</span><span class="s4">* </span><span class="s1">error</span><span class="s4">) {</span>
                <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">error </span><span class="s4">&lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
            <span class="s4">}</span>


            <span class="s3">try </span><span class="s4">{</span>
                <span class="s1">play </span><span class="s4">-&gt; </span><span class="s1">setPlayerMove</span><span class="s4">(</span><span class="s1">xMove</span><span class="s4">);</span>
            <span class="s4">}</span>

            <span class="s3">catch </span><span class="s4">(</span><span class="s3">const char</span><span class="s4">* </span><span class="s1">error</span><span class="s4">) {</span>
                <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">error </span><span class="s4">&lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
            <span class="s4">}</span>

             <span class="s1">gameOver </span><span class="s4">= </span><span class="s1">play </span><span class="s4">-&gt; </span><span class="s1">checkWinner</span><span class="s4">(</span><span class="s1">counter</span><span class="s4">);</span>

            <span class="s3">if </span><span class="s4">(!</span><span class="s1">gameOver</span><span class="s4">) {</span>
                <span class="s1">play</span><span class="s4">-&gt;</span><span class="s1">randomMove</span><span class="s4">();</span>
            <span class="s4">}</span>

            <span class="s1">play </span><span class="s4">-&gt; </span><span class="s1">displayBoard</span><span class="s4">();</span>

            <span class="s1">counter </span><span class="s4">++;</span>

        <span class="s4">} </span><span class="s3">while </span><span class="s4">(!</span><span class="s1">gameOver</span><span class="s4">);</span>

        <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">endl </span><span class="s4">&lt;&lt; </span><span class="s2">&quot;The score is: &quot; </span><span class="s4">&lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
        <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s2">&quot;Your Score(X): &quot; </span><span class="s4">&lt;&lt; </span><span class="s1">play </span><span class="s4">-&gt; </span><span class="s1">getxScore</span><span class="s4">() &lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">10</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">)</span>
             <span class="s4">&lt;&lt; </span><span class="s2">&quot;Player2 Score(O): &quot; </span><span class="s4">&lt;&lt; </span><span class="s1">play </span><span class="s4">-&gt; </span><span class="s1">getyScore</span><span class="s4">() &lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>

        <span class="s3">bool </span><span class="s1">keepGoing </span><span class="s4">= </span><span class="s3">false</span><span class="s4">;</span>
        <span class="s3">do </span><span class="s4">{</span>
            <span class="s3">try </span><span class="s4">{</span>
                <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">endl </span><span class="s4">&lt;&lt; </span><span class="s2">&quot; Do you wish to keep playing(Y/N)? &quot;</span><span class="s4">;</span>
                <span class="s1">cin </span><span class="s4">&gt;&gt; </span><span class="s1">menu</span><span class="s4">;</span>

                <span class="s3">if </span><span class="s4">(</span><span class="s1">menu </span><span class="s4">!= </span><span class="s2">'Y' </span><span class="s4">&amp;&amp; </span><span class="s1">menu </span><span class="s4">!= </span><span class="s2">'N'</span><span class="s4">) {</span>
                    <span class="s3">throw </span><span class="s4">(</span><span class="s2">&quot;Sorry the value you entered is incorrect, please try again.&quot;</span><span class="s4">);</span>
                <span class="s4">}</span>
                <span class="s1">play </span><span class="s4">-&gt; </span><span class="s1">resetBoard</span><span class="s4">();</span>
                <span class="s1">keepGoing </span><span class="s4">= </span><span class="s3">true</span><span class="s4">;</span>
            <span class="s4">}</span>

            <span class="s3">catch </span><span class="s4">(</span><span class="s3">const char</span><span class="s4">* </span><span class="s1">error</span><span class="s4">) {</span>
                <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">error </span><span class="s4">&lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
            <span class="s4">}</span>
        <span class="s4">} </span><span class="s3">while </span><span class="s4">(!</span><span class="s1">keepGoing</span><span class="s4">);</span>



    <span class="s4">} </span><span class="s3">while </span><span class="s4">(</span><span class="s1">menu </span><span class="s4">== </span><span class="s2">'Y'</span><span class="s4">);</span>


    <span class="s1">cout </span><span class="s4">&lt;&lt;  </span><span class="s1">endl </span><span class="s4">&lt;&lt; </span><span class="s2">&quot;The Final score is: &quot; </span><span class="s4">&lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
    <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s2">&quot;Your Score(X): &quot; </span><span class="s4">&lt;&lt; </span><span class="s1">play </span><span class="s4">-&gt; </span><span class="s1">getxScore</span><span class="s4">() &lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">10</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">)</span>
         <span class="s4">&lt;&lt; </span><span class="s2">&quot;Player2 Score(O): &quot; </span><span class="s4">&lt;&lt; </span><span class="s1">play </span><span class="s4">-&gt; </span><span class="s1">getyScore</span><span class="s4">() &lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
    <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">endl </span><span class="s4">&lt;&lt; </span><span class="s2">&quot;Thank you for playing!&quot;</span><span class="s4">;</span>

    <span class="s3">delete </span><span class="s1">play</span><span class="s4">;</span>

    <span class="s3">return </span><span class="s5">0</span><span class="s4">;</span>

<span class="s4">}</span>



<span class="s3">void </span><span class="s1">TicTacToe::setPlayerMove</span><span class="s4">(</span><span class="s3">int </span><span class="s1">move</span><span class="s4">) {</span>

    <span class="s3">if </span><span class="s4">(</span><span class="s1">board</span><span class="s4">[</span><span class="s1">move</span><span class="s4">] == </span><span class="s2">'X' </span><span class="s4">|| </span><span class="s1">board</span><span class="s4">[</span><span class="s1">move</span><span class="s4">] == </span><span class="s2">'O'</span><span class="s4">) {</span>
        <span class="s3">throw</span><span class="s4">(</span><span class="s2">&quot;That position is already taken. Please try another one&quot;</span><span class="s4">);</span>
    <span class="s4">}</span>

    <span class="s1">playerMove </span><span class="s4">= </span><span class="s1">move</span><span class="s4">;</span>
    <span class="s1">board</span><span class="s4">[</span><span class="s1">playerMove</span><span class="s4">] = </span><span class="s2">'X'</span><span class="s4">;</span>


<span class="s4">}</span>

<span class="s3">void </span><span class="s1">TicTacToe::randomMove</span><span class="s4">() {</span>

    <span class="s3">do </span><span class="s4">{</span>
        <span class="s1">computerMove </span><span class="s4">= </span><span class="s1">rand</span><span class="s4">() % </span><span class="s5">9</span><span class="s4">;</span>
    <span class="s4">} </span><span class="s3">while </span><span class="s4">(</span><span class="s1">board</span><span class="s4">[</span><span class="s1">computerMove</span><span class="s4">] == </span><span class="s2">'X' </span><span class="s4">|| </span><span class="s1">board</span><span class="s4">[</span><span class="s1">computerMove</span><span class="s4">] == </span><span class="s2">'O'</span><span class="s4">);</span>

    <span class="s1">board</span><span class="s4">[</span><span class="s1">computerMove</span><span class="s4">] = </span><span class="s2">'O'</span><span class="s4">;</span>

<span class="s4">}</span>



<span class="s3">void </span><span class="s1">TicTacToe::displayBoard</span><span class="s4">() {</span>

    <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">10</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">60</span><span class="s4">, </span><span class="s2">'-'</span><span class="s4">) &lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
    <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">34</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s2">&quot;TIC TAC TOE&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
    <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">10</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">60</span><span class="s4">, </span><span class="s2">'-'</span><span class="s4">) &lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>


    <span class="s3">for </span><span class="s4">(</span><span class="s3">int </span><span class="s1">j </span><span class="s4">= </span><span class="s5">0</span><span class="s4">; </span><span class="s1">j </span><span class="s4">&lt; </span><span class="s5">3</span><span class="s4">; </span><span class="s1">j</span><span class="s4">++) {</span>
            <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">25</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s2">&quot;|&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">25</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt;  </span><span class="s2">&quot;|&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
            <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">18</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s1">board</span><span class="s4">[</span><span class="s1">j</span><span class="s4">] &lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">6</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s2">&quot;|&quot;</span>
                 <span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">12</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s1">board</span><span class="s4">[</span><span class="s1">j </span><span class="s4">+ </span><span class="s5">3</span><span class="s4">] &lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">12</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s2">&quot;|&quot;</span>
                 <span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">6</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s1">board</span><span class="s4">[</span><span class="s1">j </span><span class="s4">+ </span><span class="s5">6</span><span class="s4">] &lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">18</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
            <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">25</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s2">&quot;|&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">25</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt;  </span><span class="s2">&quot;|&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>
            <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">10</span><span class="s4">, </span><span class="s2">' '</span><span class="s4">) &lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">15</span><span class="s4">, </span><span class="s2">'-'</span><span class="s4">) &lt;&lt; </span><span class="s2">&quot;T&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">25</span><span class="s4">, </span><span class="s2">'-'</span><span class="s4">) &lt;&lt; </span><span class="s2">&quot;T&quot; </span><span class="s4">&lt;&lt; </span><span class="s1">string</span><span class="s4">(</span><span class="s5">15</span><span class="s4">, </span><span class="s2">'-'</span><span class="s4">) &lt;&lt; </span><span class="s1">endl</span><span class="s4">;</span>

        <span class="s4">}</span>


<span class="s4">}</span>


<span class="s3">bool </span><span class="s1">TicTacToe::checkWinner</span><span class="s4">(</span><span class="s3">int </span><span class="s1">counter</span><span class="s4">) {</span>

    <span class="s3">for </span><span class="s4">(</span><span class="s3">int </span><span class="s1">i </span><span class="s4">= </span><span class="s5">0</span><span class="s4">; </span><span class="s1">i </span><span class="s4">&lt; </span><span class="s5">3</span><span class="s4">; </span><span class="s1">i</span><span class="s4">++) {</span>
        <span class="s6">// check rows</span>
        <span class="s3">if </span><span class="s4">(</span><span class="s1">board</span><span class="s4">[</span><span class="s1">i</span><span class="s4">] == </span><span class="s2">'X' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s1">i </span><span class="s4">+ </span><span class="s5">3</span><span class="s4">] == </span><span class="s2">'X' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s1">i </span><span class="s4">+ </span><span class="s5">6</span><span class="s4">] == </span><span class="s2">'X'</span><span class="s4">) {</span>
            <span class="s1">winner </span><span class="s4">= </span><span class="s2">'X'</span><span class="s4">;</span>
            <span class="s1">xScore </span><span class="s4">+=</span><span class="s5">1</span><span class="s4">;</span>
            <span class="s3">return true</span><span class="s4">;</span>
        <span class="s4">}</span>
        <span class="s3">if </span><span class="s4">(</span><span class="s1">board</span><span class="s4">[</span><span class="s1">i</span><span class="s4">] == </span><span class="s2">'O' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s1">i </span><span class="s4">+ </span><span class="s5">3</span><span class="s4">] == </span><span class="s2">'O' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s1">i </span><span class="s4">+ </span><span class="s5">6</span><span class="s4">] == </span><span class="s2">'O'</span><span class="s4">) {</span>
            <span class="s1">winner </span><span class="s4">= </span><span class="s2">'O'</span><span class="s4">;</span>
            <span class="s1">yScore </span><span class="s4">+=</span><span class="s5">1</span><span class="s4">;</span>
            <span class="s3">return true</span><span class="s4">;</span>
        <span class="s4">}</span>
        <span class="s6">//check columns</span>
        <span class="s3">if </span><span class="s4">(</span><span class="s1">board</span><span class="s4">[</span><span class="s1">i </span><span class="s4">* </span><span class="s5">3</span><span class="s4">] == </span><span class="s2">'X' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s1">i </span><span class="s4">* </span><span class="s5">3 </span><span class="s4">+ </span><span class="s5">1</span><span class="s4">] == </span><span class="s2">'X' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s1">i </span><span class="s4">* </span><span class="s5">3 </span><span class="s4">+ </span><span class="s5">2</span><span class="s4">] == </span><span class="s2">'X'</span><span class="s4">) {</span>
            <span class="s1">winner </span><span class="s4">= </span><span class="s2">'X'</span><span class="s4">;</span>
            <span class="s1">xScore </span><span class="s4">+=</span><span class="s5">1</span><span class="s4">;</span>
            <span class="s3">return true</span><span class="s4">;</span>
        <span class="s4">}</span>
        <span class="s3">if </span><span class="s4">(</span><span class="s1">board</span><span class="s4">[</span><span class="s1">i </span><span class="s4">* </span><span class="s5">3</span><span class="s4">] == </span><span class="s2">'O' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s1">i </span><span class="s4">* </span><span class="s5">3 </span><span class="s4">+ </span><span class="s5">1</span><span class="s4">] == </span><span class="s2">'O' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s1">i </span><span class="s4">* </span><span class="s5">3 </span><span class="s4">+ </span><span class="s5">2</span><span class="s4">] == </span><span class="s2">'O'</span><span class="s4">) {</span>
            <span class="s1">winner </span><span class="s4">= </span><span class="s2">'O'</span><span class="s4">;</span>
            <span class="s1">yScore </span><span class="s4">+=</span><span class="s5">1</span><span class="s4">;</span>
            <span class="s3">return true</span><span class="s4">;</span>
        <span class="s4">}</span>

    <span class="s4">}</span>


    <span class="s6">//  check diagonal left to right</span>
    <span class="s3">if </span><span class="s4">(</span><span class="s1">board</span><span class="s4">[</span><span class="s5">0</span><span class="s4">] == </span><span class="s2">'X' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s5">4</span><span class="s4">] == </span><span class="s2">'X' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s5">8</span><span class="s4">] == </span><span class="s2">'X'</span><span class="s4">) {</span>
        <span class="s1">winner </span><span class="s4">= </span><span class="s2">'X'</span><span class="s4">;</span>
        <span class="s1">xScore</span><span class="s4">++;</span>
        <span class="s3">return true</span><span class="s4">;</span>
    <span class="s4">}</span>

    <span class="s3">if </span><span class="s4">(</span><span class="s1">board</span><span class="s4">[</span><span class="s5">0</span><span class="s4">] == </span><span class="s2">'O' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s5">4</span><span class="s4">] == </span><span class="s2">'O' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s5">8</span><span class="s4">] == </span><span class="s2">'O'</span><span class="s4">) {</span>
        <span class="s1">winner </span><span class="s4">= </span><span class="s2">'O'</span><span class="s4">;</span>
        <span class="s1">yScore</span><span class="s4">++;</span>
        <span class="s3">return true</span><span class="s4">;</span>
    <span class="s4">}</span>

    <span class="s6">// check diagonal right to left</span>
    <span class="s3">if </span><span class="s4">(</span><span class="s1">board</span><span class="s4">[</span><span class="s5">2</span><span class="s4">] == </span><span class="s2">'X' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s5">4</span><span class="s4">] == </span><span class="s2">'X' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s5">6</span><span class="s4">] == </span><span class="s2">'X'</span><span class="s4">) {</span>
        <span class="s1">winner </span><span class="s4">= </span><span class="s2">'X'</span><span class="s4">;</span>
        <span class="s1">xScore</span><span class="s4">++;</span>
        <span class="s3">return true</span><span class="s4">;</span>
    <span class="s4">}</span>

    <span class="s3">if </span><span class="s4">(</span><span class="s1">board</span><span class="s4">[</span><span class="s5">2</span><span class="s4">] == </span><span class="s2">'O' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s5">4</span><span class="s4">] == </span><span class="s2">'O' </span><span class="s4">&amp;&amp; </span><span class="s1">board</span><span class="s4">[</span><span class="s5">6</span><span class="s4">] == </span><span class="s2">'O'</span><span class="s4">) {</span>
        <span class="s1">winner </span><span class="s4">= </span><span class="s2">'O'</span><span class="s4">;</span>
        <span class="s1">yScore</span><span class="s4">++;</span>
        <span class="s3">return true</span><span class="s4">;</span>
    <span class="s4">}</span>

    <span class="s3">if </span><span class="s4">(</span><span class="s1">counter </span><span class="s4">&gt; </span><span class="s5">8</span><span class="s4">) {</span>
        <span class="s1">winner </span><span class="s4">= </span><span class="s2">'-'</span><span class="s4">;</span>
        <span class="s1">cout </span><span class="s4">&lt;&lt; </span><span class="s2">&quot;All the positions were used. There is no winner&quot;</span><span class="s4">;</span>
        <span class="s3">return true</span><span class="s4">;</span>
    <span class="s4">}</span>

    <span class="s3">return false</span><span class="s4">;</span>

<span class="s4">}</span>

<span class="s3">void </span><span class="s1">TicTacToe:: resetBoard</span><span class="s4">() {</span>
    <span class="s3">for </span><span class="s4">(</span><span class="s3">int </span><span class="s1">i </span><span class="s4">= </span><span class="s5">0</span><span class="s4">; </span><span class="s1">i </span><span class="s4">&lt; </span><span class="s5">9</span><span class="s4">; </span><span class="s1">i</span><span class="s4">++) {</span>
        <span class="s1">board</span><span class="s4">[</span><span class="s1">i</span><span class="s4">] = </span><span class="s2">'-'</span><span class="s4">;</span>
    <span class="s4">}</span>
    <span class="s1">winner </span><span class="s4">= </span><span class="s2">'-'</span><span class="s4">;</span>
<span class="s4">}</span>

<span class="s3">char </span><span class="s1">TicTacToe::getWinner</span><span class="s4">() {</span>
    <span class="s3">return </span><span class="s1">winner</span><span class="s4">;</span>
<span class="s4">}</span>

<span class="s3">int </span><span class="s1">TicTacToe::getxScore</span><span class="s4">() {</span>
    <span class="s3">return </span><span class="s1">xScore</span><span class="s4">;</span>
<span class="s4">}</span>

<span class="s3">int </span><span class="s1">TicTacToe::getyScore</span><span class="s4">() {</span>
    <span class="s3">return </span><span class="s1">yScore</span><span class="s4">;</span>
<span class="s4">}</span></pre>
</body>
</html>
