= アジャイルに「アジャイル開発」の「開発」はいらない

//flushright{
フクイ（@keita_kitami_）
//}


私はとあるIT機器メーカーのサービス子会社で情シス（社内向けのIT部門）で長年働いています。情シスと言うと社内PCのお世話とかヘルプデスク、運用監視のイメージがありますが、私はたまたま新規のシステム開発や既存のシステムの刷新のプロジェクトに多く携わっています。その中で従来のシステム開発方式で、デスマーチ的なけっこう悲惨なケースにも巻き込まれたり、見たりしてきました。アジャイルとの出会いは4〜5年前にアジャイルのセミナーに参加したことで、そのセミナーを聞いたときに、もしかしたらこの不幸の連鎖から逃れられるきっかけにならないかと思い取り組み始めたというのがはじまりです。


今は仕事の中でアジャイルの導入に挑んだりしながら、社外ではでクラウド製品やRPAなどのコミュニティ、アジャイルのコミュニティに参加してLTをしたりイベントレポートを書いたり、たまに運営のお手伝いをしています。




== アジャイルではない組織にアジャイル開発を導入する難しさ


私の活動は、組織の方針に基づいた活動ではなくみずからの意志と責任でアジャイルに取り組んでいるので自分のことは「野良アジャイラー」と思っています。そういった状況でのアジャイル導入に関わっている関係で、アジャイルと密接に繋がっている組織の文化、意識の壁を痛感しながらの経験は貴重といえば貴重なので、そのあたりの話をしてみたいと思います。


アジャイルという言葉が世に出るまではウォーターフォールに代表される従来の経験則に基づいた開発の考え方で開発プロジェクトがすすめられてきました。これは「最初に完璧な要件・仕様を決める」ということだけではなく、「ITエンジニアは顧客の作って欲しいというものを黙って作る」とか、「上流で決めたことには絶対に逆らわない」「開発のプロセスごとにゲートを設定して成果物をためておく」とかといった考え方のもとに進められています。そして顧客側のメンバーは「短いプロジェクト期間中にできるだけ要望を詰め込もう」などと考えます。・・・・挙げはじめたらキリがないくらいはものすごく大きな「無理」を多く含んだものになっています。


たとえ「これはアジャイルで開発しよう」と組織が決定したとしても、残念なことにいままで挙げたような、あらゆる事が健全なチーム運営の前に立ちはだかることになります。オーナー側が何も理解せずに従来の考え方のまま「自分たちにとって都合の良いアジャイル」を要求するためチームの活動はとても悲惨な事になってしまったりします。


その反面、世の中の進歩は目覚ましく、IT側から見ても、仕様書に基づいた、長ったらしいコードでシステムを作ることもめったにないし、クラウドの普及によって特にSaaSやPaaSを利用するにあたって複数のサービスをAPIを使用して上手に組み合わせて使ったりたりして柔軟に構築するのが当たり前になってきています。ビジネスの側面もVUCAとかDXを取り上げるまでもなく、仮説と実証の繰り返しが必要な「正解のない世界」になっています。


アジャイルが好きか嫌いかは別にして、もはや従来のやり方ではシステムやプロダクトを開発できなくなっているので、頑張るしか無いのです。


== システム運用に導入してみよう


開発へのアジャイル導入の話は愚痴になりそうなのでこのあたりで一旦置いておいて、今回は開発以外の分野でのアジャイル導入の話をしたいと思います。


アジャイルといえばアジャイル「開発」と呼ばれるようにソフトウェアの開発の手法のように語られることが多いのですが、実はそんなことではありません。創造的な仕事であるならば、どんな仕事（例えば編集作業など）にも活用できる「思想」とか「考え方」のようなものだと思います。これは実際にいろいろな書籍に中で紹介されています。


それを実感したのはScrum.Incさんのスクラムマスター研修を受けていたときの話でした。講習の本題ではなかったのですが、サンプルとしてテキストに「システム運用チームに適用された例」が紹介されていました。たしか割り込み作業に対しどう対処するかという趣旨の説明だったと思いますが、とにかくそこで感じたのは「開発」ではない「運用チームでもアジャイルやっても良いんだ!!」という事でした。


システムの運用といえば、基本的にもう出来上がって稼働しているITシステムに関して日常的に発生するシステム障害や問い合わせに対応するという不定期なルーチンワークが主な仕事です。情報システムを使い続けるには必要な存在ではありますが、開発に比べてクレーム対応のような後ろ向きな仕事が中心でなかなか評価されにくい仕事だったりします。技術的にも最新の技術を使うこともなく、枯れ切ったような古いシステムを従来からある手法を使って応急措置的にメンテナンスし続ける・・・というものがほとんどです。

== こっそり取り組みはじめる


スクラムマスター研修から職場に帰って来て、取り組もうとターゲットにしたのはひとつの運用・保守チームです。基幹システムというほどの規模ではない小さなシステムを複数扱っているSESのメンバーによるチームで、従来サイロ的に縦割りでそれぞれの担当者が対応していたものをチームを編成して統合的に対応し始めたばかりのチームでした。

=== 最初にやったのは工数の見える化


このチームで最初に取り組んだのは「工数調査」です。アジャイルの導入には必須のプラクティスではありませんが、まずは「活動する時間」をどれくらい確保できるか見通しを立てる必要がありました。2ヶ月位チームメンバーの工数を調査しました。その結果わかったのは70%以上はシステム障害対応や問い合わせ対応などの受け身の割り込み作業で占められていたということです。
その工数を少しでも前向きなシステムの改善に当てられるように活動することにしました。実際の割り込み作業は量やタイミングにムラがあり、急がなくても良い仕事も含まれていることがわかったので思い切って30%くらいは前向きな活動に充てることを決めました。ここはマネージャーである私の覚悟や決意が大事でした。とにかくその決意をメンバーに伝えて活動を始めることにしました。


このあたりは誰の介入も受ける可能性もなく、わりとスムーズに決めることが出来ました。システム開発プロジェクトであればプロジェクトオーナー的なエライ人たちの関与がありますが、日常のシステム運用保守はせいぜい月に１回の定期報告があるくらいでエライ人の介入が入るタイミングはありません。チームのマネージャーとメンバーの中でが同意できれば、誰にも知られずに簡単にアジャイルは導入できるのです。障害対応や問い合わせに使う時間を減らす事で障害対応が遅くなってしまう懸念はありましたが、やってみるとユーザーに気が付かれるほどの目に見える影響はまったくありませんでした。


ちなみに導入をはじめたときにメンバーにはアジャイルという言葉は全く使いませんでした。さり気なくスクラムの本を置き忘れたくらいです。

=== 取り組んだプラクティスのはたったの3つ


実際に導入したプラクティスは単純に3つだけです。スプリントの設定とプロダクトバックログを作ったのと、ふりかえりをやったくらいです。


スプリントは1ヶ月、すこし長く感じるかもしれませんが、社内システムの場合には月末締め前後にはリリース（デプロイ）できないことや、今まで数ヶ月に1回くらいの間隔でランダムにリリースしていた事、それぞれのシステムのシステム環境が全く別なので、本番環境に短い周期でデプロイするのもちょっと大変・・・・ということを受けて決めました。まずはハートビート的なサイクルを意識する事が大事なので、ここは無理しないで緩めに決めました。


そして2つ目に導入したプラクティスはプロダクトバックログです。この言葉は使わずに「対応すべき課題」のリストを作ることからはじめました。運用の世界では障害の根本対応である問題、恒久処置への対応、運用作業の改善、ドキュメントの修正やリファクタリングなどの保守の改善が挙げられます。それすべてにステークホルダーが居ますが、通常の場合には担当するマネージャーがプロダクトオーナーの役割を果たすことが出来ます。運用の世界はあまり注目されていないので外部からの声が薄いこともあってチームにとっては非常にやりやすいと思います。


そして3つめのプラクティス、ふりかえりをして、自分たちで方法やルールを考えてすすめていく・・・単純にそれくらいです。最初は週に1回単位に状況の確認とふりかえりを実施していきました。必要に応じてその他のイベントは勝手に出来ていくので、そこはチームに任せていました。チームメンバーがなんかやっているようでも、マネージャー以上はそこには口を挟まない・・・・でもこのチームの場合はそういった対応がうまくいった感じでした。

=== 気がつけば結果がついてくる


そうやって活動し始めた「こっそりアジャイル」でしたが、意外なほどわりとうまく成果が出てきました。数カ月後にはチームの工数のうち問い合わせ対応などの後ろ向きの作業が確実に少なくなり、改善にかけられる工数が増えてきて、ついに60%を超えるようになりました。年間を通してカウントするとリリースされたプログラムの数も倍以上に伸びました。改善プログラムがリリースされることで障害対応や運用作業が軽減され、さらに時間が出来るという好循環が生まれていました。


このチームで起きたできごとはそういった生産性に関することばかりではありません。


気がついたらチームメンバー間で勉強会を実施していたり、遠くから見ていたらペアプロ的なことをやっていたりしていました。世の中がコロナ禍に襲われた時にはチーム内でコミュニケーションツールを接続しっぱなしにしてチーム内で声をかけながら仕事をしていたり・・・・と驚くほどチームが自走していました。

== 実は最も大事なこと


実は前述の3つのプラクティスのほかにひとつだけ仕込んだことがあります。これはカッコよく言うと「エンジニアへのリスペクト」です。リスペクトと言ってもおべんちゃらを使うことではありません。高い報酬を与えることだって出来ません。具体的にはエンジニアとして成長する機会を作ることです。今回のチームメンバーはいわゆるSESのメンバーです。SESの場合、顧客のオフィスで仕事をする関係上、なかなか日中に勉強する機会はありません。そういった状況の中で「月に1日は外で勉強する」というルールを決めて外の世界を見てくることにしました。それを所属会社の営業や上司にも伝えて宣言と言うか、お願いをしました。悲しいですがITの勉強をするのには心理的安全性が全然足りていないのです。理想は自主的な活動が良いのですが、心理的な安全性を確保する為にあえて「ノルマ」にしました。各ITベンダーが行うセミナーは基本的に昼間の時間です。それに出席できないというのはエンジニアの成長のうえで非常にマイナスだと思いますが、なかなか出来ていないのが多くの現状だと思います。

活動を初めて真剣に参加できるセミナーを探しました。幸い職場に近い品川のマイクロソフトさんに無料のセミナーがたくさんあったので、まずは参加させてもらいました。本当にありがたかったです。そうやってチームメンバーはさまざまな新しい技術に触れる機会を得ることが出来るようになりました。嬉しかったのはメンバーの一人が憧れていたけどなかなか行くことが出来なかった「Developers Summit」に参加することが出来て、私に嬉しそうに「デブサミに行ってきました!」と報告してきたことです。このときにはなんかこみ上げてくるものがありました。


運用保守の世界は閉じられた世界でのある意味退屈な繰り返しですが、外の世界や技術に触れることで世間とのギャップや自分たちがやるべきことも知ることが出来るので、運用の見直しやリファクタリングがそこから生まれました。実はこの「外部での学習機会」が一番のエンジンであったと今では信じています。

== さいごに


今回、手探りで始めた運用保守の世界でのアジャイル導入について紹介しましたが、運用保守の世界はずっと同一メンバーで行われていてチームになりやすいこと、そして繰り返し永続的に続いていく継続的活動であること・・・など一般的な開発プロジェクトよりもアジャイルへの適応性が高いような気がします。


しかも始めるに当たっての説得する相手は直接の上司くらいで比較的容易ですし、メンバーがやることも「周期的にやる」「課題リスト作る」「ふりかえる」だけなのでメンバーからも反対される要素も少ないと思います。
アジャイルはシステム開発だけのものではありません。ぜひ運用保守の世界でもチャレンジしてみましょう。


ちなみに沢渡あまねさんと新井剛さんの共著「ここはウォーターフォール市、アジャイル町」が出たときには歓喜してしまいました。


@<href>{https://www.shoeisha.co.jp/book/detail/9784798165387, https://www.shoeisha.co.jp/book/detail/9784798165387}

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-fukui/profile-fukui.jpg}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        フクイ @keita\_kitami\_ https://twitter.com/keita\_kitami\_\\
        \end{minipage}
    \hspace{1ex}
//}

とあるIT機器メーカーのサービス子会社で情シス〜社内向けのIT部門で長年勤めています。また最近はクラウド製品のコミュニティやRPAなどのコミュニティ、アジャイルのコミュニティに参加してLTをしたりイベントレポートを書いたり、たまに運営のお手伝いをしています。
