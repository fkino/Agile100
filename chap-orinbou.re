= アジャイルの始め方-続け方

//flushright{
砂田 文宏 @orinbou
//}

==== 対象読者（読んでみて欲しい人）
この内容は、既にバリバリ濃いアジャイルを実践されている人にはあまり役に立たないと思います。できれば以下のような人に読んでいただき、何かヒントになるものがあれば幸いです。（もし無かったらごめんなさい）

 * 過去アジャイルに取り組んだがうまくいかなかった人
 * 現在アジャイルに取り組んでいるがうまくいっていない人
 * これからアジャイルに取り組もうと思っているが、どう始めたら良いか分からず困っている人

== 背景
今よりもっとうまくソフトウェア開発したい。価値あるソフトウェアを利用者に届けたい。ソフトウェア開発を志す人ならば一度くらい、そんなことを考えたことがあるのではないでしょうか？そんなことができたら本当にどんなに素晴らしいことでしょう。でも現実は厳しく、誰かが（いつ？どんな目的で？）決めたのかよく分からない開発標準という枠組みの中で、あまり役に立たないと感じながらも決まり事だからと渋々、あるいは必死に不合理と戦い苦しんでいるケースも未だに多いかもしれません。そんな状況に当時の自分は耐えかねてソフトウェア開発から逃亡しようと画策しました。しかし、幸運にも（？）2008年秋に発生したリーマンショックで初めての転職と言う名の逃亡が見事に失敗した後、生きる（食いつなぐ）ために再びソフトウェア開発の仕事に戻ることにしました。日々の作業に追われる中、2012年頃たまたま本屋で目にし、手に取ったのが書籍「アジャイルサムライ ― 達人開発者への道」でした。今から遡ること、約10年前のことでした。
 
衝撃的な内容に興奮して一気に読み終え、気になった部分をマーキングし、付箋を貼りまくったことを今でも覚えています。

== 初めてのアジャイル開発
当時は少し景気が悪かったことが幸いし、アサイン先がなく社内で浮いていた人員を活用して自社サービスのプロトタイプを開発するというプロジェクトが立ち上がりました。アジャイルサムライを読んで熱に浮かされていた私にとって、これは千載一遇のチャンスだと感じました。上司に是非アジャイル開発でやらせて欲しいと懇願して、何とか受け入れてもらいました。今後は約2週間（スプリント）ごとに動くソフトウェアを届けますと（実際できるかどうか分からなかったけど）約束しました。当時のスタートアップ時の体制（ご近所さん達）はこんな感じでした。

//image[image2][スタートアップ時の体制（ご近所さん達][scale=0.4]


当時のインプットは、アジャイルサムライとネットを漁って調べた情報だけでした。とにかくアジャイルだかスクラムだかもよく分からないまま手探りで始めました。まず初めにやったこと（プラクティス？）は次の３つでした。

 * 朝会
 * スプリント（約2週間）
 * ふりかえり（レトロスペクティブ）

たったこれだけ？と思うかもしれませんが、たったこれだけでも序盤からいきなり躓きまくりました。まず、朝会が時間どおりに始まりません。上司に声をかけられたPO（的な人）が、頻繁に朝会をスキップしてきました。さらに、スプリント開始時に合意した（絶対したはず！）WIPを無視してどんどんと追加タスクを積んできました。プラクティスが理解されず、乱れるリズム。つのるイライラ。駄々下がる開発者のモチベーション。そんな感じで序盤は、思った以上に思ったように進みませんでした。加えて、私のバディ（相方）である若手開発者が「僕は過去を振り返らない男なので」と（頑なに）ふりかえりを拒否したりもしました。新しいことを始める場合は「たったこれだけ？」でも本当に大変だと感じました。

== 地道な改善

序盤の躓きもありアジャイルごっこにもなってない状況で何度も挫折しかけました。しかし、相方に懇願して「ふりかえり」を継続して地道に軌道修正を続けたことで、どうにか続けることができました。当時、効果が高かった改善点の例としては下記が挙げられます。

@<strong>{・ご近所さん（プロジェクト関係者）の見える化}

ご近所さんの図を壁に貼り同じチームメンバだと再認識することで、課題解決に向けた建設的な相談がしやすくなった。また、スプリントの途中で動くものを見せて早い（そして忌憚のない）フィードバックによる軌道修正が可能になった。

@<strong>{・バックログをプロダクトとスプリントに明確に分けた}

POや利用者に価値がある単位をプロダクトバックログ、それを実現するためスプリントで必要な作業に細分化したものをスプリントバックログとして分けて管理し、かつ見える化したことで、POのマイクロマネジメント（細かなタスク単位の指示）が減った。


地道な改善を継続的に行い、それが実感できるようになってくると、チームメンバの意識も少しずつ変わってきました。あの自称「過去を振り返らない男」の若手開発者が、ある時ふいに「環境って自分達で変えられるものなんですね。知りませんでした。」と言ってくれました。この言葉に自分も少し救われた気持ちになりました。それ以来、彼は社内の特別な協力者になり、社内勉強会の企画や社外コミュニティでの発表など事あるごとに積極的に協力してくれるようになりました。その後、成功も失敗も沢山ありましたが、それまでと決定的に違ったのは、彼の協力がなかった頃と比べて新しいことを試すまでに要する時間が圧倒的に短くなったことでした。

== 学んだこと
変革にリーダー（先達）が必要というのは誰しも思うところだと思います。しかし、それでだけは物事はなかなか思ったようには進みません。変革の取り組みを支持するファーストフォロワー（最初の支持者）が1人居てくれることにより、新しい取り組みへの対応速度が全く違ってきます。また、成功も失敗も格好の「ふりかえり」のネタ（むしろ宝物）として前向きにとらえることができ、一人では躊躇して（人知れず）止めてしまうようなケースも激減します。

変革の取り組みを支持するファーストフォロワー（最初の支持者）が存在することで、最初は突飛に見えるような取り組みにも信憑性が生まれ、多くの人達が参加するきっかけとなり、やがて社会運動に繋がる。これは2010年のTEDカンファレンスでアメリカの起業家デレク・シヴァーズ（Derek Sivers）氏が紹介した「社会運動はどうやって起こすか（How to start a movement）」@<fn>{ted}で分かりやすく説明してくれています。

//footnote[ted][https://www.ted.com/talks/derek_sivers_how_to_start_a_movement/ TED How to start a movement. Derek Sivers 社会運動はどうやって起こすか ]

== その後の現場で

その後も様々な困難に遭遇しましたが「ファーストフォロワー」を見つけて、まず「2人から始める」ことで、私なりのアジャイルな取り組みを続けることができました。

=== 事例１：前職の現場にて

@<strong>{Step1：若手エンジニアと【2人】で朝会をはじめる}

派遣先の現場で若手エンジニア（顧客）と2人で朝会をはじめる。週1でふりかえりを実施して継続的な改善をし続けたことで、その成果が注目され複数チーム（3チーム：10人）へ普及。

@<strong>{Step2：シニアエンジニアと【2人】で勉強会へ参加する}

成果に注目してくれた派遣先の現場でシニアエンジニア（顧客）を誘って2人で社外の勉強会へ参加する。新たな知見や気付きを共に得て、あるべき姿について（飲みながら何度も）議論した。社外から講師を招待してチームやエンジニアに向けた勉強会を開催して成長や改善の糧となるインプットの場をつくった。Jenkinsを導入して、これまで手動で行っていたビルドやインストーラー作成などを自動化することで、エンジニアの作業負荷やストレスを低減し、尚且つヒューマンエラーによる品質低下も激減した。

=== 事例２：現職の現場にて
@<strong>{Step1：担当プロジェクトで若手エンジニアと【2人】でスクラムを画策}

自身が担当するプロジェクトでスクラムに興味を持ってくれた若手エンジニとなんちゃってスクラムをはじめスクラムマスターの役割を担う。

@<strong>{Step2：次期プロジェクトでPMと【2人】で画策して顧客にスクラムを提案}

なんちゃってスクラムのリズムに慣れた頃合いと、次期開発フェーズのプロジェクト開始タイミングを見計らって、これまでの成果に注目してくれたPMと画策して顧客にスクラムを提案して受け入れてもらう。（いろいろとあったが）結果として顧客に価値を届けることができた。

@<strong>{Step3：社内でアジャイルを推進する役割（CoE）を【2人】で担う}

最近では社内へアジャイルを推進・啓蒙する役割を担っている。かつてアジャイルコミュニティで知り合った仲間が偶然同じ会社に（しかも驚くべきことにほぼ同じタイミングで）入社していたこともあり、ここ2～3年は二人三脚で支え合いながら取り組んでいる。今度は、私がフォロワー側に回ることも多い。

== これから始める人へ

正しいアジャイル、スクラムかどうかを気にし（過ぎ）ないで欲しいと思います。確かに「アジャイルソフトウェア開発宣言」や「XP」や「スクラム」などの原則や価値を理解することは重要です。同様に理論を学び理解することも重要だと思います。しかし物事は全てゼロイチで割り切れるほど単純ではありません。私は理想と現実の間でバランスを取っていくことが大切だと考えています。
アジャイル柱の（あの）平鍋氏も「（アジャイルなんて）今の仕事で使えないじゃん！」という境遇にかつて陥ったことがあるそうです。そんな時「今の仕事を今よりうまくすることはできる。」という言葉に救われ、アジャイルに拘り過ぎることをやめ、アジャイルの要素を使って「いきいきと仕事がしたい」「お客さんと喜び合える仕事がしたい」と気持ちを切り替えたそうです。私もその言葉に何度も救われました。もし興味があれば下記の記事も読んでみてください。（実は私の記事ですw）

https://www.manaslink.com/articles/15011

== まとめ
これまでアジャイルを学び、拙いながら実践し続けてこれたのは、その時々で良き理解者（ファーストフォロワー）に恵まれたことが最大の要因だと考えています。与えられた境遇の中で「ファーストフォロワー」を見つけて、まず「2人から始める」ことで、今日まで実践し続けることができました。運もあるかもしれませんが、自分の意志で前進し、試行錯誤して足掻き続けて困っていると、不思議と良いフォロワーに出会えることが多かったように思います。社内だけでなく、社外コミュニティなどでも、助けてくれるフォロワーはきっと居ると思います。そう信じて、まずは1人フォロワーを探して2人からアジャイルをはじめてみてはいかがでしょうか。

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-orinbou/orinbou.png}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        砂田　文宏（すなだ　ふみひろ） @orinbou https://twitter.com/orinbou\\
        ブログ：https://blog.orinbou.info/
        \end{minipage}
    \hspace{1ex}
//}


認定スクラムマスター（CSM）/ 認定スクラムプロダクトオーナー（CSPO）

独立系SIerでテックリードやスクラムマスターなどを生業としています。
社内へアジャイル開発を啓蒙するべくAgilityCoEメンバとしても奮闘中。
リーダー塾7期卒業生。AWS（SAP、DOP）とk8s（CKA、CKAD）チョトデキル。
趣味はキャンプ△とサイクリング。バスケも好き。（最近は専らNBA観戦）
