﻿char* timeZoneName(int zone)
{
    char address[25][2048]=
    {
        "西12区:埃尼威托克岛,夸贾林岛",
        "西11区:中途岛,东萨摩亚",
        "西10区:夏威夷",
        "西9区:阿拉斯加",
        "西8区:太平洋时间（美国和加拿大）,蒂华纳",
        "西7区:山地时间（美国和加拿大）,亚利桑那",
        "西6区:中部时间（美国和加拿大）,墨西哥城,特古西加尔巴,萨斯喀彻温省",
        "西5区:东部时间（美国和加拿大）,印第安那州（东部）,波哥大,利马,基多",
        "西4区:大西洋时间（加拿大）,加拉加斯,拉巴斯",
        "西3区:巴西利亚,布宜诺斯艾利斯,乔治敦",
        "西2区:中大西洋",
        "西1区:亚速尔群岛,佛得角群岛",
        "零时区:伦敦,都柏林,爱丁堡,里斯本,卡萨布兰卡,蒙罗维亚",
        "东1区:阿姆斯特丹,柏林,伯尔尼,罗马,斯德哥尔摩,维也纳,贝尔格莱德,布拉迪斯拉发,布达佩斯,卢布尔雅那,布拉格,布鲁赛尔,哥本哈根,马德里,巴黎,萨拉热窝,斯科普里,索非亚,华沙,萨格勒布",
        "东2区:布加勒斯特,哈拉雷,比勒陀尼亚,赫尔辛基,里加,塔林,开罗,雅典,伊斯坦布尔,明斯克,以色列",
        "东3区:巴格达,科威特,利雅得,莫斯科,圣彼得堡,伏尔加格勒,内罗毕",
        "东4区:阿布扎比,马斯喀特,巴库,第比利斯",
        "东5区:叶卡特琳堡,伊斯兰堡,卡拉奇,塔什干",
        "东6区:阿拉木图,达卡,科伦坡",
        "东7区:曼谷,河内,雅加达",
        "东8区:北京,重庆,广州,上海,香港,乌鲁木齐,台北,新加坡,佩思",
        "东9区:平壤,汉城,东京,大阪,札幌,雅库茨克",
        "东10区:布里斯班,关岛,莫尔兹比港,霍巴特,堪培拉,墨尔本,悉尼",
        "东11区:马加丹,所罗门群岛,新喀里多尼亚",
        "东12区:奥克兰,惠灵顿,斐济,堪察加半岛,马绍尔群岛"
    };

    return address[zone+12];
}
