#pragma once

namespace UniLab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			int massA1[] = { 31295, 12351, 21840, 27420, 19503, 27968, 31262, 3202, 20171, 28226, 9432, 10835, 9633, 14889, 11302, 16036, 10301, 14565, 19589, 30478, 25768, 15337, 24300, 8381, 11054, 27359, 25264, 6852, 1892, 26778, 24229, 17075, 19050, 17484, 23942, 3948, 2670, 2809, 2454, 20018, 15217, 3371, 11144, 13827, 17742, 11496, 4252, 17704, 15096, 18401, 7180, 7434, 5891, 4588, 1958, 20551, 8550, 29620, 6074, 22277, 25215, 16815, 17974, 7559, 18263, 24401, 10512, 24830, 23336, 8832, 6116, 20129, 14876, 2887, 21727, 6399, 8536, 9166, 15579, 30612, 16441, 7306, 17099, 17563, 11997, 30897, 14938, 11556, 11750, 24305, 13775, 10086, 4986, 25185, 31540, 9046, 2446, 22456, 21687, 10617, 357, 2749, 16464, 23542, 83, 26622, 17060, 3567, 10695, 28357, 24874, 25873, 10889, 32584, 1932, 14698, 26943, 22816, 23632, 10107, 8246, 24060, 18615, 2191, 17503, 27799, 14309, 17739, 23960, 26599, 20803, 13957, 13357, 16024, 12834, 2138, 30623, 1720, 27297, 21370, 17060, 436, 16848, 24775, 8302, 7299, 1301, 19231, 30512, 16417, 26319, 29557, 31711, 1599, 12346, 31527, 4918, 9785, 19091, 14475, 17404, 11848, 25468, 22987, 7817, 23801, 12449, 10740, 15751, 11997, 5788, 11337, 17398, 29826, 14102, 477, 31858, 1187, 10799, 19809, 32185, 24220, 26400, 2362, 30824, 20768, 8223, 983, 4613, 31022, 5508, 30273, 28994, 11585, 9257, 26867, 24448, 10440, 4886, 23277, 9107, 3029, 25694, 24324, 31173, 793, 11588, 9084, 19741, 11280, 14754, 6104, 5601, 2425, 32396, 9457, 345, 7177, 8240, 11078, 18134, 29536, 3840, 15251, 19955, 19260, 20, 15781, 2587, 2285, 17609, 31084, 12107, 11529, 17839, 13906, 9241, 3424, 9378, 25803, 21750, 27442, 18998, 1581, 19632, 14752, 25177, 18115, 13883, 10337, 3123, 32284, 11184, 18102, 16721, 2473, 30358, 21152, 14339, 13704, 9569, 2128, 17666, 10138, 6712, 1503, 86, 219, 30459, 5951, 12663, 10483, 2693, 32370, 18099, 30728, 9006, 3065, 23503, 13015, 27284, 7056, 5105, 3331, 11932, 18712, 19134, 9644, 15283, 29141, 24767, 12868, 11354, 21977, 9993, 19358, 20961, 28096, 11805, 4424, 6770, 18590, 31757, 5915, 6226, 1590, 28128, 20752, 3684, 16749, 18488, 29014, 9711, 32510, 15154, 27809, 12704, 29806, 23950, 6340, 8659, 15171, 25360, 6530, 3598, 17521, 4645, 4001, 30670, 8213, 15562, 15937, 10887, 28005, 16554, 6764, 23782, 1767, 21126, 30958, 30553, 16098, 6362, 20071, 9169, 16403, 22974, 13726, 2759, 26272, 16394, 12312, 24957, 9554, 31677, 21738, 11654, 19198, 16800, 25035, 24968, 15428, 28198, 25197, 14145, 30076, 20375, 25102, 27336, 26862, 23405, 23370, 15125, 3393, 21247, 23091, 21444, 12343, 7004, 1187, 1046, 24983, 19578, 31953, 26425, 2666, 15248, 21027, 25033, 1129, 1216, 29763, 6294, 17847, 22521, 23669, 17576, 29900, 3356, 24872, 2176, 30897, 17245, 26570, 10913, 22899, 4077, 26849, 22863, 1234, 32726, 31320, 23447, 19257, 28966, 21526, 21391, 10483, 1871, 726, 30175, 12187, 16078, 15666, 23168, 9172, 25611, 3840, 19140, 9019, 29056, 20194, 12439, 26266, 6430, 4633, 2820, 29791, 31980, 4762, 3067, 22348, 23282, 15204, 17233, 11631, 12373, 20240, 31496, 9045, 6083, 23722, 10449, 12155, 26385, 30399, 6351, 8709, 20515, 24759, 13726, 23730, 2317, 9829, 4500, 18192, 16247, 20957, 5446, 21228, 23366, 13190, 30542, 9485, 21625, 28784, 24908, 13858, 8272, 19175, 26155, 32760, 31156, 22856, 11686, 2800, 2259, 7955, 30986, 28593, 11787, 15426, 25917, 8474, 29705, 9945, 3583, 4730, 27954, 8895, 30320, 3588, 65, 27596, 23250, 20349, 26674, 17955, 20369, 14136, 27488, 26818, 20864, 10564, 3562, 30295, 11110, 27876, 17242, 30805, 21689, 8255, 25481, 4168, 11689, 5209, 26301, 21350, 15457, 9538, 11541, 1126, 20361, 25230, 21799, 8085, 10767, 7172, 26087, 27942, 7207, 9883, 20427, 3529, 11664, 28066, 2348, 13696, 15641, 9278, 18928, 2222, 14693, 11033, 10854, 20337, 22251, 32345, 10609, 29490, 26432, 16335, 24041, 31355, 13721, 12657, 22334, 30472, 3212, 13323, 29022, 6688, 18710, 7729, 8153, 25382, 7906, 32632, 29763, 7275, 29128, 9190, 25563, 6726, 26773, 27558, 4201, 28775, 7434, 19200, 6253, 4456, 3367, 1673, 12917, 3237, 12713, 32663, 6095, 24142, 24017, 9464, 608, 1466, 19559, 23524, 16852, 22014, 32255, 29999, 11256, 13503, 19579, 707, 27747, 15172, 22481, 8526, 30556, 28111, 12302, 2616, 9208, 32046, 24731, 472, 12675, 18061, 16575, 30183, 15393, 1422, 11622, 24629, 25781, 27804, 4129, 16794, 12290, 6012, 22381, 18736, 24849, 3108, 17464, 31679, 21202, 15825, 12449, 28537, 5381, 18004, 13312, 28648, 20571, 18860, 18470, 7716, 13785, 14298, 21478, 24905, 32126, 24817, 16084, 15144, 14373, 3949, 29260, 21821, 30893, 7365, 27574, 23010, 6230, 13380, 17417, 28097, 6766, 14356, 20622, 23951, 29486, 31900, 16615, 21496, 13791, 19980, 24143, 11221, 28224, 29749, 20515, 12965, 10540, 10399, 2466, 28475, 28792, 13013, 17649, 16564, 15899, 7940, 12129, 27052, 10897, 17092, 10997, 23474, 23169, 1078, 18719, 22264, 28573, 5967, 25291, 12879, 201, 9587, 29086, 24403, 23936, 4934, 3712, 32483, 8308, 22719, 14680, 6613, 21877, 8062, 19990, 20967, 13972, 7007, 19191, 7928, 17544, 20815, 19460, 27768, 15953, 16478, 24541, 11037, 15387, 8470, 6580, 10967, 29028, 12043, 1180, 20743, 23137, 12468, 23556, 32492, 22686, 12665, 11646, 15453, 742, 8717, 18374, 31422, 11362, 21246, 6911, 1069, 26372, 32139, 28223, 27388, 1319, 20149, 3662, 3428, 24175, 10393, 22955, 375, 23543, 3580, 19920, 32087, 4011, 27688, 31159, 4006, 23282, 14071, 31133, 15421, 26769, 2861, 24582, 20769, 32204, 19210, 12289, 1970, 26317, 26912, 19629, 17958, 586, 21859, 508, 5430, 12387, 16511, 2743, 7703, 10441, 10606, 14275, 17580, 31781, 26953, 7330, 12794, 17592, 12638, 25916, 25308, 19006, 12164, 14560, 3832, 7449, 19627, 20102, 31729, 27819, 14775, 5719, 4319, 7428, 16015, 7279, 15868, 24509, 32624, 2273, 3231, 21539, 11400, 24827, 27503, 29337, 20416, 28108, 2768, 18231, 11481, 27620, 23970, 16311, 26554, 26715, 4651, 4242, 25864, 28437, 5969, 30054, 6392, 28227, 525, 20635, 14433, 29485, 26396, 28230, 22, 9264, 31992, 28237, 1650, 7170, 6662, 6605, 19252, 2622, 25361, 10168, 31117, 15644, 15863, 13507, 4216, 30847, 23714, 29311, 25930, 15926, 29754, 20933, 13450, 27515, 29849, 11352, 13570, 20416, 21504, 12742, 24854, 8364, 17160, 7055, 27221, 28512, 23771, 27785, 2894, 766, 10147, 16259, 11173, 15468, 31043, 26921, 2662, 26453, 5190, 28968, 25240, 7281, 4372, 9874, 15894, 6407, 26476, 21379, 27290, 12208, 11278, 21509, 17691, 13917, 22200, 5169, 20313, 5531, 9300, 14743, 17334, 23830, 26992, 31712, 6983, 348, 26862, 28850, 14891, 9956, 765, 20180, 13851, 7759, 20552, 27795, 27459, 30189, 32109, 32100, 21328, 17539, 31408, 21194, 21195, 4428, 21489, 9338, 28837, 32061, 17627, 9150, 11283, 4493, 23903, 24087, 25756, 22389, 19040, 13094, 2159, 7477, 5808, 25036, 31995, 3159, 30780, 28817, 30138, 30007, 32131, 30018, 11597, 29635, 12109, 32734, 13518, 20864, 31385, 11444, 19810, 18638, 30423, 8645, 13, 3436, 23639, 31599, 26571, 15934, 16130, 27725, 25052, 9294, 24904, 5209, 6239, 25362, 13145, 21331, 6946, 32237, 21144, 6759, 31417, 22263, 7500, 266, 6605, 2817, 11929, 8485, 10423, 20180, 22192, 32373, 32589, 12730, 25410, 32049, 18684, 26944, 19514, 11246, 14104, 2617, 6315, 25793, 11631, 21254, 4103, 2467, 7460, 27413, 2963, 24601, 443, 15272, 31767, 20500, 13424, 17880, 30682, 2581, 2509, 6617, 25805, 22678, 28027, 21375, 4871, 8358, 28761, 16385, 23409, 21971, 31947, 4350, 5827, 25932, 9557, 16573, 175, 23623, 16744, 3001, 23387, 19873, 19579, 9053, 26389, 15044, 15198, 32268, 579, 974, 15307, 26724, 1432, 8944, 4671, 15300, 12430, 14099, 2567, 24075, 14864, 8642, 11166, 28323, 22902, 15428, 11574, 17599, 23479, 26632, 20885, 8928, 6362, 32327, 10530, 17310, 23982, 25316, 26944, 9125, 7611, 16023, 19930, 11518, 376, 9290, 14655, 10128, 9407, 9667, 1585, 4838, 6525, 7044, 16440, 19762, 686, 9199, 13885, 11154, 23433, 7598, 6995, 26515, 16119, 8530, 10712, 1524, 17226, 15930, 31933, 6828, 15916, 32439, 4898, 3629, 1237, 30573, 12838, 18411, 31874, 26109, 6397, 25112, 3874, 8929, 15171, 19122, 22610, 27287, 30095, 30144, 7819, 16897, 28748, 1241, 27802, 31244, 9412, 2021, 24401, 5776, 14462, 15144, 31613, 7287, 8906, 26236, 8216, 2850, 20634, 16861, 26815, 1288, 14995, 811, 5222, 27552, 8548, 31020, 17482, 29314, 25687, 22481, 10023, 28105, 9765, 6586, 25771, 24507, 13327, 6907, 23851, 2476, 25386, 20769, 4502, 1055, 22523, 17520, 18343, 8751, 27715, 11887, 15966, 9261, 10012, 24999, 1712, 32139, 31557, 24231, 21630, 12792, 16315, 14923, 23492, 3533, 5769, 14654, 3603, 15784, 13792, 17598, 19521, 2390, 18282, 7327, 24671, 13815, 20956, 27283, 21483, 21340, 24779, 6824, 30279, 30900, 24256, 7442, 10090, 13416, 21902, 29995, 15062, 13123, 2275, 14776, 1737, 25302, 7966, 27246, 29624, 4891, 19552, 16053, 8185, 23384, 13286, 20907, 27584, 17990, 29590, 20332, 332, 2419, 3543, 1937, 11618, 19429, 9638, 2294, 7163, 16384, 16615, 10945, 19770, 5290, 1272, 9887, 22176, 428, 8588, 10321, 17539, 29531, 23991, 30312, 12220, 6521, 31557, 6220, 23457, 23894, 25680, 7555, 28723, 826, 22290, 27184, 9368, 31495, 1015, 11482, 28107, 9243, 20982, 24943, 1426, 2164, 15650, 1417, 23984, 21271, 892, 25071, 21340, 1458, 5132, 3423, 14067, 12672, 29744, 3211, 31722, 14189, 3891, 13153, 9478, 21371, 9249, 11151, 16591, 30564, 17882, 17479, 2626, 14465, 8550, 28479, 454, 21738, 32392, 3837, 4705, 5087, 11926, 31313, 5932, 1382, 23943, 22819, 21764, 25910, 31054, 15982, 15491, 9428, 9063, 9101, 2094, 24828, 24751, 10422, 2800, 17986, 31608, 16068, 17096, 10489, 19421, 7737, 958, 21588, 23123, 12163, 20251, 21707, 4225, 18558, 10969, 16832, 27730, 25403, 3417, 19043, 26952, 12800, 12628, 2515, 5139, 13455, 26132, 26246, 31842, 12971, 12260, 234, 30969, 16345, 19653, 30028, 29187, 11364, 29026, 29946, 9642, 1955, 21062, 31396, 6886, 6014, 19789, 7688, 13970, 26927, 18264, 19151, 9925, 24390, 4677, 24241, 6239, 24816, 28447, 29408, 27362, 3704, 145, 21668, 22148, 7950, 16801, 28994, 14466, 19400, 21659, 14627, 31158, 27622, 15946, 15922, 17260, 9818, 24942, 4486, 30322, 23688, 20075, 9281, 6254, 12874, 15167, 12216, 11124, 22327, 14262, 26836, 9176, 29989, 29153, 696, 28737, 26604, 7876, 17571, 18431, 8813, 23375, 14104, 13215, 25811, 6544, 11325, 956, 10265, 28198, 10114, 10776, 25293, 20985, 26754, 10475, 2835, 11304, 7470, 3194, 31212, 14403, 32552, 8940, 5048, 7355, 24685, 26201, 23034, 17814, 27447, 19749, 19036, 22375, 6434, 29836, 12019, 20094, 9613, 22909, 17347, 7772, 32579, 5036, 21894, 25962, 32091, 18147, 15785, 2282, 23388, 16024, 24472, 19757, 16549, 26565, 2875, 15878, 22284, 7412, 26816, 31616, 13510, 30873, 20892, 16076, 7559, 8613, 15052, 11133, 24297, 18008, 5217, 16632, 19474, 14679, 16955, 37, 7313, 25854, 4629, 6507, 12938, 2295, 21186, 14044, 3091, 30220, 28853, 13996, 25565, 15417, 15303, 27112, 17687, 32518, 14901, 11108, 5775, 25620, 11496, 25334, 24859, 20469, 10490, 18657, 21815, 25920, 27253, 32148, 21487, 31205, 17502, 18837, 32512, 30399, 20978, 6584, 5178, 21864, 19759, 2964, 6184, 12369, 11926, 7735, 5107, 6418, 31280, 23321, 27268, 10494, 24015, 2895, 2281, 32763, 1174, 19713, 30202, 9617, 17339, 7454, 1340, 64, 1164, 10574, 12549, 22295, 4016, 32297, 24545, 4482, 7600, 26022, 6453, 10596, 20662, 2518, 27938, 869, 31636, 12242, 5036, 8590, 23047, 7922, 1820, 25619, 7741, 2111, 7586, 19567, 30614, 555, 26175, 30390, 30376, 27776, 19682, 15655, 29317, 20631, 18898, 14849, 21312, 4554, 8267, 7065, 26029, 555, 28780, 32424, 7273, 12151, 8273, 17129, 25114, 31813, 24700, 3556, 24824, 22915, 20345, 28676, 25485, 13347, 193, 24560, 12984, 27410, 27360, 24, 5368, 24938, 211, 25230, 21223, 232, 31412, 16152, 25861, 16544, 4505, 20355, 11959, 1007, 12985, 17978, 27280, 26034, 28112, 4887, 11214, 17333, 8901, 27256, 6440, 7791, 12938, 17046, 17607, 8428, 14149, 15122, 17810, 25866, 1965, 8913, 30126, 18408, 2486, 4106, 31301, 25244, 6256, 16029, 30855, 31524, 300, 10407, 7151, 415, 23522, 3411, 20936, 28094, 17103, 23027, 24047, 4213, 11618, 10575, 11482, 11766, 29273, 19772, 1753, 29663, 13608, 5745, 2204, 8114, 17050, 20119, 1270, 27015, 8378, 6303, 13280, 1789, 22004, 11096, 21185, 23158, 11128, 6721, 6637, 8836, 28383, 8348, 11115, 15774, 30481, 8899, 24315, 22040, 28774, 22975, 3927, 2642, 13323, 23831, 19642, 25903, 11944, 32486, 6303, 15048, 6719, 11824, 3787, 15714, 3928, 21366, 8077, 24222, 12635, 23432, 16197, 20720, 31293, 25755, 12067, 15698, 26974, 16795, 17201, 314, 6578, 18371, 18836, 2249, 800, 6762, 30479, 6469, 27431, 26912, 31944, 8137, 18631, 21497, 11087, 22587, 8095, 27177, 18140, 24703, 5715, 30417, 28888, 3050, 19504, 4121, 19103, 2810, 12819, 7295, 13701, 15172, 27270, 17007, 21527, 13229, 29997, 30227, 12451, 24797, 10593, 6508, 11514, 17905, 17434, 25250, 8052, 13680, 3346, 31896, 16693, 5761, 22311, 5572, 20911, 2651, 24577, 20798, 4968, 1532, 21238, 19990, 1533, 13342, 29482, 14571, 360, 13159, 12539, 7097, 5758, 1248, 11932, 24563, 22715, 16040, 30719, 14034, 30018, 22250, 29177, 23532, 15136, 6924, 17569, 26120, 30929, 10025, 17657, 6705, 21253, 29122, 8656, 29961, 30884, 16304, 22502, 24160, 22543, 5213, 12626, 15109, 14761, 29236, 21537, 20700, 25494, 32598, 9280, 12593, 10946, 25231, 31900, 7500, 5413, 27784, 903, 6470, 28998, 24894, 7774, 8475, 1790, 30130, 18536, 13311, 17791, 21987, 20738, 10742, 4756, 18169, 17657, 1951, 7979, 14787, 1848, 17488, 25872, 24931, 23715, 13928, 12795, 8776, 28482, 6625, 25549, 27997, 3234, 25893, 14871, 23424, 9080, 24611, 24796, 7478, 17544, 12705, 6296, 4765, 10949, 22228, 8064, 8098, 3770, 14638, 16396, 4211, 18728, 22135, 10419, 8760, 2289, 12063, 28917, 1022, 8244, 28371, 28575, 25587, 11450, 846, 17995, 23769, 8081, 5490, 17958, 22453, 26614, 6295, 4598, 13767, 17785, 25635, 8539, 22207, 1371, 2906, 2388, 20270, 12091, 26488, 11782, 25403, 25841, 2045, 16825, 6551, 31163, 32073, 13604, 31411, 1175, 12648, 31978, 20528, 29167, 17199, 20580, 30871, 22651, 6024, 17825, 9034, 5476, 5386, 28331, 2234, 29605, 15821, 23564, 29403, 25271, 7036, 10385, 10709, 109, 12715, 29262, 6397, 31261, 27243, 25826, 16387, 2304, 12572, 14589, 17516, 3547, 12163, 19743, 14147, 4063, 24861, 15266, 25356, 8910, 28850, 4602, 13818, 30816, 5164, 3388, 7266, 8421, 23210, 32733, 24430, 16171, 8401, 17596, 23574, 13218, 8034, 25443, 9804, 702, 18450, 18826, 27767, 31389, 25750, 15837, 12067, 23530, 11261, 28672, 8439, 2561, 16962, 18895, 17127, 1620, 22050, 26090, 4267, 15117, 20779, 20337, 20847, 22773, 19990, 28428, 24780, 19604, 18774, 18735, 1015, 3738, 16369, 29084, 7992, 21373, 12431, 22569, 24478, 24164, 13008, 21187, 11506, 31556, 6371, 2227, 30697, 25672, 20309, 8992, 14493, 5751, 28454, 26325, 12606, 22929, 13858, 6981, 18693, 32569, 22894, 25292, 4970, 7513, 26210, 26680, 22423, 18371, 9622, 1416, 11292, 3348, 13376, 18420, 31460, 15070, 18365, 29997, 360, 11526, 20333, 30181, 8482, 11370, 26820, 18834, 5189, 8391, 22942, 26479, 23211, 6619, 1235, 12484, 29455, 29638, 3340, 22632, 13436, 6838, 6613, 25476, 23557, 12739, 29427, 10137, 8887, 8472, 26103, 27077, 28620, 20308, 10771, 834, 31521, 2608, 13869, 12079, 29675, 25185, 15666, 26003, 32677, 32448, 17581, 26527, 9549, 10920, 2456, 24883, 30927, 9119, 10097, 17316, 6850, 27193, 13713, 15805, 24658, 6714, 20154, 29955, 14205, 3579, 14063, 25661, 7043, 20751, 5000, 820, 11671, 9765, 27013, 7096, 17883, 9264, 22051, 28643, 4235, 11974, 13741, 5538, 2936, 19910, 11413, 11120, 30649, 10302, 18115, 19045, 5021, 9868, 8493, 22896, 12516, 32707, 20904, 9697, 31534, 13904, 253, 25898, 691, 18397, 27456, 998, 24373, 5237, 14941, 26138, 32563, 16617, 28404, 31931, 30560, 6259, 19303, 21617, 26195, 12698, 30001, 411, 16512, 23125, 16505, 3475, 6247, 3955, 23014, 18739, 14091, 826, 17078, 10392, 6310, 30543, 21258, 3109, 8603, 28118, 13956, 6859, 8108, 30169, 5908, 4488, 27501, 5870, 27151, 11310, 15864, 8212, 4994, 2918, 3811, 24031, 21445, 15348, 3695, 31701, 13139, 17213, 4098, 5399, 24792, 21766, 30936, 14404, 13708, 5758, 1781, 25242, 21440, 4735, 1118, 13918, 5046, 17169, 14984, 28798, 12982, 21552, 14865, 24950, 30814, 975, 19118, 28016, 17978, 17180, 5989, 22447, 17813, 32006, 27388, 23853, 10126, 9724, 4273, 25219, 11118, 30968, 11563, 14602, 24376, 1469, 9137, 16192, 20098, 29789, 23450, 24685, 4996, 8701, 31236, 14214, 32367, 31452, 25545, 22865, 18176, 13714, 7087, 2506, 31828, 21398, 20703, 24774, 9982, 2819, 12697, 8662, 20823, 32156, 22053, 19310, 27157, 24845, 22541, 8518, 13599, 31860, 27017, 13825, 16032, 7967, 315, 14349, 1114, 29847, 28188, 1482, 18750, 23006, 26551, 19694, 18233, 6134, 28309, 14632, 13136, 10146, 4344, 30211, 18415, 25201, 26572, 2062, 18814, 17655, 24538, 16698, 14646, 9822, 9023, 21635, 10803, 2334, 14108, 19666, 27850, 26888, 8592, 27426, 1052, 10889, 11235, 12258, 6635, 3885, 5380, 5019, 25773, 21346, 18486, 13011, 13279, 22911, 27654, 28977, 5788, 1540, 23936, 22498, 20590 };
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Label^ nameLabel;
	protected:


	protected:

	private: System::Windows::Forms::RadioButton^ arrType1Btn;
	private: System::Windows::Forms::RadioButton^ arrType2Btn;
	private: System::Windows::Forms::RadioButton^ arrType3Btn;





	private: System::Windows::Forms::RadioButton^ radixSortBtn;

	private: System::Windows::Forms::RadioButton^ insertionSortBtn;
	private: System::Windows::Forms::RadioButton^ bubbleSortBtn;
	private: System::Windows::Forms::RadioButton^ shakeSortBtn;



	private: System::Windows::Forms::RadioButton^ quickSrotBtn;
	private: System::Windows::Forms::Button^ runBtn;
	private: System::Windows::Forms::Button^ resetBtn;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ inputLabel;
	private: System::Windows::Forms::Label^ outputLabel;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->arrType1Btn = (gcnew System::Windows::Forms::RadioButton());
			this->arrType2Btn = (gcnew System::Windows::Forms::RadioButton());
			this->arrType3Btn = (gcnew System::Windows::Forms::RadioButton());
			this->radixSortBtn = (gcnew System::Windows::Forms::RadioButton());
			this->insertionSortBtn = (gcnew System::Windows::Forms::RadioButton());
			this->bubbleSortBtn = (gcnew System::Windows::Forms::RadioButton());
			this->shakeSortBtn = (gcnew System::Windows::Forms::RadioButton());
			this->quickSrotBtn = (gcnew System::Windows::Forms::RadioButton());
			this->runBtn = (gcnew System::Windows::Forms::Button());
			this->resetBtn = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->inputLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->outputLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->nameLabel->Location = System::Drawing::Point(12, 9);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(195, 20);
			this->nameLabel->TabIndex = 0;
			this->nameLabel->Text = L"���������� ��������";
			// 
			// arrType1Btn
			// 
			this->arrType1Btn->AutoSize = true;
			this->arrType1Btn->Location = System::Drawing::Point(6, 18);
			this->arrType1Btn->Name = L"arrType1Btn";
			this->arrType1Btn->Size = System::Drawing::Size(38, 17);
			this->arrType1Btn->TabIndex = 2;
			this->arrType1Btn->TabStop = false;
			this->arrType1Btn->Text = L"A1";
			this->arrType1Btn->UseVisualStyleBackColor = true;
			this->arrType1Btn->CheckedChanged += gcnew System::EventHandler(this, &MainForm::arrType1Btn_CheckedChanged);
			// 
			// arrType2Btn
			// 
			this->arrType2Btn->AutoSize = true;
			this->arrType2Btn->Location = System::Drawing::Point(6, 41);
			this->arrType2Btn->Name = L"arrType2Btn";
			this->arrType2Btn->Size = System::Drawing::Size(38, 17);
			this->arrType2Btn->TabIndex = 3;
			this->arrType2Btn->TabStop = false;
			this->arrType2Btn->Text = L"A2";
			this->arrType2Btn->UseVisualStyleBackColor = true;
			// 
			// arrType3Btn
			// 
			this->arrType3Btn->AutoSize = true;
			this->arrType3Btn->Location = System::Drawing::Point(6, 64);
			this->arrType3Btn->Name = L"arrType3Btn";
			this->arrType3Btn->Size = System::Drawing::Size(38, 17);
			this->arrType3Btn->TabIndex = 4;
			this->arrType3Btn->TabStop = false;
			this->arrType3Btn->Text = L"A3";
			this->arrType3Btn->UseVisualStyleBackColor = true;
			// 
			// radixSortBtn
			// 
			this->radixSortBtn->AutoSize = true;
			this->radixSortBtn->Location = System::Drawing::Point(6, 19);
			this->radixSortBtn->Name = L"radixSortBtn";
			this->radixSortBtn->Size = System::Drawing::Size(93, 17);
			this->radixSortBtn->TabIndex = 6;
			this->radixSortBtn->TabStop = false;
			this->radixSortBtn->Text = L"�����������";
			this->radixSortBtn->UseVisualStyleBackColor = true;
			// 
			// insertionSortBtn
			// 
			this->insertionSortBtn->AutoSize = true;
			this->insertionSortBtn->Location = System::Drawing::Point(6, 42);
			this->insertionSortBtn->Name = L"insertionSortBtn";
			this->insertionSortBtn->Size = System::Drawing::Size(81, 17);
			this->insertionSortBtn->TabIndex = 7;
			this->insertionSortBtn->TabStop = false;
			this->insertionSortBtn->Text = L"���������";
			this->insertionSortBtn->UseVisualStyleBackColor = true;
			// 
			// bubbleSortBtn
			// 
			this->bubbleSortBtn->AutoSize = true;
			this->bubbleSortBtn->Location = System::Drawing::Point(6, 65);
			this->bubbleSortBtn->Name = L"bubbleSortBtn";
			this->bubbleSortBtn->Size = System::Drawing::Size(94, 17);
			this->bubbleSortBtn->TabIndex = 8;
			this->bubbleSortBtn->TabStop = false;
			this->bubbleSortBtn->Text = L"�����������";
			this->bubbleSortBtn->UseVisualStyleBackColor = true;
			// 
			// shakeSortBtn
			// 
			this->shakeSortBtn->AutoSize = true;
			this->shakeSortBtn->Location = System::Drawing::Point(6, 88);
			this->shakeSortBtn->Name = L"shakeSortBtn";
			this->shakeSortBtn->Size = System::Drawing::Size(70, 17);
			this->shakeSortBtn->TabIndex = 9;
			this->shakeSortBtn->TabStop = false;
			this->shakeSortBtn->Text = L"�������";
			this->shakeSortBtn->UseVisualStyleBackColor = true;
			// 
			// quickSrotBtn
			// 
			this->quickSrotBtn->AutoSize = true;
			this->quickSrotBtn->Location = System::Drawing::Point(6, 111);
			this->quickSrotBtn->Name = L"quickSrotBtn";
			this->quickSrotBtn->Size = System::Drawing::Size(69, 17);
			this->quickSrotBtn->TabIndex = 10;
			this->quickSrotBtn->TabStop = false;
			this->quickSrotBtn->Text = L"�������";
			this->quickSrotBtn->UseVisualStyleBackColor = true;
			// 
			// runBtn
			// 
			this->runBtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->runBtn->Location = System::Drawing::Point(6, 251);
			this->runBtn->Name = L"runBtn";
			this->runBtn->Size = System::Drawing::Size(179, 54);
			this->runBtn->TabIndex = 11;
			this->runBtn->TabStop = false;
			this->runBtn->Text = L"������";
			this->runBtn->UseVisualStyleBackColor = false;
			// 
			// resetBtn
			// 
			this->resetBtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->resetBtn->Location = System::Drawing::Point(6, 311);
			this->resetBtn->Name = L"resetBtn";
			this->resetBtn->Size = System::Drawing::Size(179, 36);
			this->resetBtn->TabIndex = 12;
			this->resetBtn->TabStop = false;
			this->resetBtn->Text = L"�����";
			this->resetBtn->UseVisualStyleBackColor = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->resetBtn);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->runBtn);
			this->groupBox1->Location = System::Drawing::Point(16, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(191, 411);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->arrType2Btn);
			this->groupBox5->Controls->Add(this->arrType3Btn);
			this->groupBox5->Controls->Add(this->arrType1Btn);
			this->groupBox5->Location = System::Drawing::Point(9, 14);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(176, 91);
			this->groupBox5->TabIndex = 0;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"������� �������";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->insertionSortBtn);
			this->groupBox4->Controls->Add(this->radixSortBtn);
			this->groupBox4->Controls->Add(this->bubbleSortBtn);
			this->groupBox4->Controls->Add(this->shakeSortBtn);
			this->groupBox4->Controls->Add(this->quickSrotBtn);
			this->groupBox4->Location = System::Drawing::Point(9, 111);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(176, 134);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"������� ����������";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Location = System::Drawing::Point(6, 382);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(179, 23);
			this->button2->TabIndex = 14;
			this->button2->TabStop = false;
			this->button2->Text = L"�������� ������";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(6, 353);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 23);
			this->button1->TabIndex = 13;
			this->button1->TabStop = false;
			this->button1->Text = L"����������";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox2->Controls->Add(this->inputLabel);
			this->groupBox2->Location = System::Drawing::Point(233, 32);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(219, 376);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"������� ������";
			// 
			// inputLabel
			// 
			this->inputLabel->AutoSize = true;
			this->inputLabel->Location = System::Drawing::Point(6, 16);
			this->inputLabel->Name = L"inputLabel";
			this->inputLabel->Size = System::Drawing::Size(0, 13);
			this->inputLabel->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox3->Controls->Add(this->outputLabel);
			this->groupBox3->Location = System::Drawing::Point(477, 32);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(219, 376);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"���������";
			// 
			// outputLabel
			// 
			this->outputLabel->AutoSize = true;
			this->outputLabel->Location = System::Drawing::Point(6, 16);
			this->outputLabel->Name = L"outputLabel";
			this->outputLabel->Size = System::Drawing::Size(0, 13);
			this->outputLabel->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(230, 419);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"����� ���������� ���������:";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(714, 455);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->nameLabel);
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->Text = L"������������ ������ �2 - ����������";
			this->groupBox1->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void arrType1Btn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->arrType1Btn->Checked == true) {

		}
	}
	};
}
