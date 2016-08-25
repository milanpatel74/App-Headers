/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:12 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/CasualAppConstantsBase.h>

@class NSArray, NSString, NSMutableDictionary, NSDictionary;

@interface AppConstants : CasualAppConstantsBase {

	BOOL shouldNotShowIntroMovie;
	BOOL alwaysShowTutorial;
	BOOL tutorialEnabled;
	BOOL bubbleExperiencedUser;
	BOOL useLowResImages;
	BOOL skipTutorialGoToMap;
	BOOL useGemsToUnlockIsland;
	BOOL useFixedGemCostToUnlockIsland;
	BOOL showQuestsOnLevelSelectView;
	BOOL sortProductsDescending;
	BOOL allowFreePlay;
	BOOL showWorldScore;
	BOOL newStarCountThresholdEnabled;
	BOOL colorPickerUsesJavascript;
	BOOL specialFTUE;
	BOOL _allowOverMaxEnergy;
	BOOL _shouldPreauthorizeFromOutOfEnergyDialog;
	BOOL _showNewsIconInLevelFailedDialogView;
	BOOL _showNewsIconInLevelCompletedDialogView;
	BOOL _showNewsIconInContinuePlayingDialogView;
	BOOL _showNewsIconInEnergyStoreDialogView;
	int inventoryPowerUpCap;
	int leaderboardCacheTime;
	int minimumLeaderboardRefreshTime;
	int facebookInitialLoginBonusFavor;
	int facebookScorePassedInterdialogTime;
	int userLevelUpParticleCycles;
	float userLevelUpAnimationDuration;
	int discountCoinPackageNumber;
	float bubbleCollisionDiameter;
	float bubbleProjectileSpeed;
	int poisonCount;
	int inkCount;
	int plusCount;
	int blowerBlockerCount;
	int flamethrowerCount;
	float paintSplashRadius;
	int blowerGoalChance;
	int minimumRowClearance;
	int maximumGuideLineLength;
	int lowBubblesAlertCount;
	int maximumGameHeight;
	int maximumBabiesOnScreen;
	float snowFlakeRadius;
	float snowFlakeFragmentSpeed;
	int snowFlakeTargetCount;
	float mapPinchZoomAnimationThreshold;
	int bubbleAppleAppId;
	int maxHugeTextChainCount;
	int minHugeTextBigPopCount;
	int minHugeTextHugePopCount;
	int minHugeTextBigDropCount;
	int minHugeTextHugeDropCount;
	int lowBubbleHugeTextCount;
	int energyIncrement;
	int energyRecoveryTime;
	int levelEnergyCost;
	int energyRefillItemId;
	int giveBackEnergyOnExitThreshold;
	int maximumBubblesRemainingToLaunch;
	int bubblesRemainingScore;
	int bubblesRemovedScoreMultiplier;
	int bubblesDroppedScoreMultiplier;
	int bubblesGoalScoreMultiplier;
	int bubblesRemovedBonusMinCount;
	int bubblesDroppedBonusMinCount;
	int bubblesChainBonusMinCount;
	int chainMissPenalty;
	int dropChainMissPenalty;
	int maximumCoinsAwarded;
	int maximumCoinsInBank;
	int maximumGemsInBank;
	int maximumStarsToDisplay;
	float tutorialInterdialogTime;
	float tutorialTapRadius;
	int tutorialLastSkippedLevel;
	int avatarNervousThreshold;
	int treasureKeyFavorAmount;
	int treasureKeyCashAmount;
	int maxStarsForPurchaseToUnlockIsland;
	float gemCostForEachStarToUnlockIsland;
	int fixedGemCostToUnlockIsland;
	int coinUpSellStepCount;
	int gemUpSellStepCount;
	int earthquakeRadius;
	float earthquakeDuration;
	float earthquakeMagnitude;
	int earthquakeMaxDrop;
	int earthquakeMinDrop;
	int numFeaturedQuests;
	int numIslandSpecificQuests;
	int minLevelForQuests;
	int minStarsForFreePlay;
	float freePlayCoinMultiplier;
	int tutorialWorldId;
	int defaultWorldId;
	int specialWorldId;
	int hideNewTagAfterWorldProgress;
	int islandsNeededForSpecialWorld;
	float universeMapNormalZoom;
	float universeMapInitialZoom;
	float universeMapDetailZoom;
	float universeMapPinchZoomInLimit;
	float universeMapPinchZoomOutLimit;
	float universeMapZoomSpeed;
	float worldMapNormalZoom;
	float worldMapInitialZoom;
	float worldMapDetailZoom;
	float worldMapPinchZoomInLimit;
	float worldMapPinchZoomOutLimit;
	float worldMapZoomSpeed;
	float worldMapInitialZoomSpeed;
	float mapWorldCameraRadius;
	float mapIslandCameraRadius;
	float mapWidthInTiles;
	float mapHeightInTiles;
	int multiCrackBubbleMaxCrackTimes;
	int colorPickerDefaultLastColorsWindowSize;
	int colorPickerDefaultConsecutiveLastColorsWindowSize;
	int colorPickerDefaultMaximumConsecutiveColors;
	int _inventoryPowerUpSoonThreshold;
	int _maximumGuideLineShortLength;
	int _maxPointsInShortGuideLine;
	int _bubblesPoppedScoreMultiplier;
	int _titleScreenMinLevel;
	int _replayEventMinIslandLevel;
	int _replayLevelCompleteCount;
	int _replayLevelFailureCount;
	int _replayLevelSpreadOffset;
	int _replayNextLevelChance;
	int _replayEventMaxNumLevels;
	int _replayLevelPiecesCountRandomizationPercentage;
	NSArray* longTermPowerUpsInShop;
	NSString* userLevelUpParticleScheme;
	NSMutableDictionary* appleStoreGemProducts;
	NSMutableDictionary* appleStorePackageNames;
	NSString* discountCoinPackageProductId;
	NSString* defaultPopParticle;
	NSDictionary* typeParticleMapping;
	NSArray* mapMotionFilesToPreload;
	NSArray* levelStartMotionFilesToPreload;
	NSString* bubbleInstallUrl;
	NSDictionary* hugeTextJsonMapping;
	NSDictionary* hugeTextChainMapping;
	NSString* bubblesRemovedBonusTiersMultipliersString;
	NSString* bubblesDroppedBonusTiersMultipliersString;
	NSString* bubblesChainBonusTiersMultipliersString;
	NSString* bubblesChainDroppedBonusTiersMultipliersString;
	NSString* bubblesRemainingBonusTiersMultipliersString;
	NSArray* bubblesLevelCompleteCoinsAwards;
	NSDictionary* disablePauseBeforeCompletionLevels;
	NSString* mapBackgroundTexturePath;
	NSString* dispenserBackTexturePath;
	NSString* dispenserFrontTexturePath;
	NSString* avatarIdleSchemePrefix;
	NSString* avatarThrowingSchemePrefix;
	NSString* avatarIdleTransitionSchemePrefix;
	NSString* avatarNervousIdleSchemePrefix;
	NSString* avatarNervousThrowingSchemePrefix;
	NSString* avatarNervousIdleTransitionSchemePrefix;
	NSArray* throwingBubbleSoundNames;
	NSDictionary* bubblePopSoundThresholds;
	NSString* scoreCalculatorScript;
	NSString* colorPickerScript;
	NSArray* loots;
	NSDictionary* treasureCashMultiplier;
	NSDictionary* continuePlayingDialogInfo;
	NSDictionary* unlockThresholdIslandDialogInfo;
	NSDictionary* outOfGemDialogInfo;
	NSDictionary* outOfCoinDialogInfo;
	NSDictionary* outOfEnergyDialogInfo;
	NSArray* cashProductBackgrounds;
	NSArray* favorProductBackgrounds;
	NSDictionary* defaultUiInfo;
	NSDictionary* endGameSubsequentUpsellInfo;
	NSDictionary* inGameSubsequentUpsellInfo;
	NSDictionary* _inventoryLowestLevelForBonusType;
	NSArray* _bubblesPoppedBonusTiers;
	NSArray* _bubblesDroppedBonusTiers;
	NSArray* _bubblesChainBonusTiers;
	NSArray* _bubblesChainDroppedBonusTiers;
	NSDictionary* _particleLimits;
	NSArray* _itemsToHideQuantityInEog;
	NSDictionary* _actionParticleNames;
	NSDictionary* _nameChangeGemPrice;
	double _puzzleCollectDuration;

}

@property (assign,nonatomic) int inventoryPowerUpCap; 
@property (assign,nonatomic) int inventoryPowerUpSoonThreshold;                                      //@synthesize inventoryPowerUpSoonThreshold=_inventoryPowerUpSoonThreshold - In the implementation block
@property (nonatomic,retain) NSDictionary * inventoryLowestLevelForBonusType;                        //@synthesize inventoryLowestLevelForBonusType=_inventoryLowestLevelForBonusType - In the implementation block
@property (assign,nonatomic) BOOL shouldNotShowIntroMovie; 
@property (assign,nonatomic) int leaderboardCacheTime; 
@property (assign,nonatomic) int minimumLeaderboardRefreshTime; 
@property (assign,nonatomic) int facebookInitialLoginBonusFavor; 
@property (assign,nonatomic) int facebookScorePassedInterdialogTime; 
@property (nonatomic,retain) NSString * userLevelUpParticleScheme; 
@property (assign,nonatomic) int userLevelUpParticleCycles; 
@property (assign,nonatomic) float userLevelUpAnimationDuration; 
@property (nonatomic,retain) NSMutableDictionary * appleStoreGemProducts; 
@property (nonatomic,retain) NSMutableDictionary * appleStorePackageNames; 
@property (nonatomic,retain) NSString * discountCoinPackageProductId; 
@property (assign,nonatomic) int discountCoinPackageNumber; 
@property (assign,nonatomic) float bubbleCollisionDiameter; 
@property (assign,nonatomic) float bubbleProjectileSpeed; 
@property (assign,nonatomic) int poisonCount; 
@property (assign,nonatomic) int inkCount; 
@property (assign,nonatomic) int plusCount; 
@property (assign,nonatomic) int blowerBlockerCount; 
@property (assign,nonatomic) int flamethrowerCount; 
@property (assign,nonatomic) float paintSplashRadius; 
@property (assign,nonatomic) int blowerGoalChance; 
@property (assign,nonatomic) int minimumRowClearance; 
@property (assign,nonatomic) int maximumGuideLineLength; 
@property (assign,nonatomic) int maximumGuideLineShortLength;                                        //@synthesize maximumGuideLineShortLength=_maximumGuideLineShortLength - In the implementation block
@property (assign,nonatomic) int maxPointsInShortGuideLine;                                          //@synthesize maxPointsInShortGuideLine=_maxPointsInShortGuideLine - In the implementation block
@property (nonatomic,retain) NSString * defaultPopParticle; 
@property (nonatomic,retain) NSDictionary * typeParticleMapping; 
@property (assign,nonatomic) int lowBubblesAlertCount; 
@property (assign,nonatomic) int maximumGameHeight; 
@property (assign,nonatomic) int maximumBabiesOnScreen; 
@property (nonatomic,retain) NSArray * mapMotionFilesToPreload; 
@property (nonatomic,retain) NSArray * levelStartMotionFilesToPreload; 
@property (assign,nonatomic) float snowFlakeRadius; 
@property (assign,nonatomic) float snowFlakeFragmentSpeed; 
@property (assign,nonatomic) int snowFlakeTargetCount; 
@property (assign,nonatomic) float mapPinchZoomAnimationThreshold; 
@property (assign,nonatomic) int bubbleAppleAppId; 
@property (nonatomic,retain) NSString * bubbleInstallUrl; 
@property (nonatomic,retain) NSDictionary * hugeTextJsonMapping; 
@property (nonatomic,retain) NSDictionary * hugeTextChainMapping; 
@property (assign,nonatomic) int maxHugeTextChainCount; 
@property (assign,nonatomic) int minHugeTextBigPopCount; 
@property (assign,nonatomic) int minHugeTextHugePopCount; 
@property (assign,nonatomic) int minHugeTextBigDropCount; 
@property (assign,nonatomic) int minHugeTextHugeDropCount; 
@property (assign,nonatomic) int lowBubbleHugeTextCount; 
@property (nonatomic,retain) NSArray * longTermPowerUpsInShop; 
@property (assign,nonatomic) int energyIncrement; 
@property (assign,nonatomic) int energyRecoveryTime; 
@property (assign,nonatomic) int levelEnergyCost; 
@property (assign,nonatomic) int energyRefillItemId; 
@property (assign,nonatomic) BOOL allowOverMaxEnergy;                                                //@synthesize allowOverMaxEnergy=_allowOverMaxEnergy - In the implementation block
@property (assign,nonatomic) int giveBackEnergyOnExitThreshold; 
@property (assign,nonatomic) int maximumBubblesRemainingToLaunch; 
@property (assign,nonatomic) int bubblesRemainingScore; 
@property (assign,nonatomic) int bubblesRemovedScoreMultiplier; 
@property (assign,nonatomic) int bubblesDroppedScoreMultiplier; 
@property (assign,nonatomic) int bubblesGoalScoreMultiplier; 
@property (assign,nonatomic) int bubblesRemovedBonusMinCount; 
@property (assign,nonatomic) int bubblesDroppedBonusMinCount; 
@property (assign,nonatomic) int bubblesChainBonusMinCount; 
@property (nonatomic,retain) NSString * bubblesRemovedBonusTiersMultipliersString; 
@property (nonatomic,retain) NSString * bubblesDroppedBonusTiersMultipliersString; 
@property (nonatomic,retain) NSString * bubblesChainBonusTiersMultipliersString; 
@property (nonatomic,retain) NSString * bubblesChainDroppedBonusTiersMultipliersString; 
@property (nonatomic,retain) NSString * bubblesRemainingBonusTiersMultipliersString; 
@property (assign,nonatomic) int chainMissPenalty; 
@property (assign,nonatomic) int dropChainMissPenalty; 
@property (nonatomic,retain) NSArray * bubblesLevelCompleteCoinsAwards; 
@property (assign,nonatomic) int bubblesPoppedScoreMultiplier;                                       //@synthesize bubblesPoppedScoreMultiplier=_bubblesPoppedScoreMultiplier - In the implementation block
@property (nonatomic,retain) NSArray * bubblesPoppedBonusTiers;                                      //@synthesize bubblesPoppedBonusTiers=_bubblesPoppedBonusTiers - In the implementation block
@property (nonatomic,retain) NSArray * bubblesDroppedBonusTiers;                                     //@synthesize bubblesDroppedBonusTiers=_bubblesDroppedBonusTiers - In the implementation block
@property (nonatomic,retain) NSArray * bubblesChainBonusTiers;                                       //@synthesize bubblesChainBonusTiers=_bubblesChainBonusTiers - In the implementation block
@property (nonatomic,retain) NSArray * bubblesChainDroppedBonusTiers;                                //@synthesize bubblesChainDroppedBonusTiers=_bubblesChainDroppedBonusTiers - In the implementation block
@property (assign,nonatomic) int treasureKeyFavorAmount; 
@property (assign,nonatomic) int treasureKeyCashAmount; 
@property (nonatomic,retain) NSArray * loots; 
@property (nonatomic,retain) NSDictionary * treasureCashMultiplier; 
@property (nonatomic,retain) NSString * scoreCalculatorScript; 
@property (nonatomic,retain) NSString * colorPickerScript; 
@property (assign,nonatomic) int maximumCoinsAwarded; 
@property (assign,nonatomic) int maximumCoinsInBank; 
@property (assign,nonatomic) int maximumGemsInBank; 
@property (assign,nonatomic) int maximumStarsToDisplay; 
@property (assign,nonatomic) BOOL alwaysShowTutorial; 
@property (assign,nonatomic) float tutorialInterdialogTime; 
@property (assign,nonatomic) BOOL tutorialEnabled; 
@property (assign,nonatomic) float tutorialTapRadius; 
@property (assign,nonatomic) BOOL bubbleExperiencedUser; 
@property (nonatomic,retain) NSDictionary * disablePauseBeforeCompletionLevels; 
@property (assign,nonatomic) int tutorialLastSkippedLevel; 
@property (nonatomic,retain) NSString * mapBackgroundTexturePath; 
@property (nonatomic,retain) NSString * dispenserBackTexturePath; 
@property (nonatomic,retain) NSString * dispenserFrontTexturePath; 
@property (nonatomic,retain) NSString * avatarIdleSchemePrefix; 
@property (nonatomic,retain) NSString * avatarThrowingSchemePrefix; 
@property (nonatomic,retain) NSString * avatarIdleTransitionSchemePrefix; 
@property (assign,nonatomic) int avatarNervousThreshold; 
@property (nonatomic,retain) NSString * avatarNervousIdleSchemePrefix; 
@property (nonatomic,retain) NSString * avatarNervousThrowingSchemePrefix; 
@property (nonatomic,retain) NSString * avatarNervousIdleTransitionSchemePrefix; 
@property (nonatomic,retain) NSArray * throwingBubbleSoundNames; 
@property (nonatomic,retain) NSDictionary * bubblePopSoundThresholds; 
@property (nonatomic,retain) NSDictionary * continuePlayingDialogInfo; 
@property (nonatomic,retain) NSDictionary * unlockThresholdIslandDialogInfo; 
@property (assign,nonatomic) BOOL useGemsToUnlockIsland; 
@property (assign,nonatomic) BOOL useFixedGemCostToUnlockIsland; 
@property (assign,nonatomic) int maxStarsForPurchaseToUnlockIsland; 
@property (assign,nonatomic) float gemCostForEachStarToUnlockIsland; 
@property (assign,nonatomic) int fixedGemCostToUnlockIsland; 
@property (nonatomic,retain) NSDictionary * outOfGemDialogInfo; 
@property (nonatomic,retain) NSDictionary * outOfCoinDialogInfo; 
@property (nonatomic,retain) NSDictionary * outOfEnergyDialogInfo; 
@property (assign,nonatomic) int gemUpSellStepCount; 
@property (assign,nonatomic) int coinUpSellStepCount; 
@property (assign,nonatomic) int earthquakeRadius; 
@property (assign,nonatomic) int earthquakeMinDrop; 
@property (assign,nonatomic) int earthquakeMaxDrop; 
@property (assign,nonatomic) float earthquakeDuration; 
@property (assign,nonatomic) float earthquakeMagnitude; 
@property (assign,nonatomic) int numFeaturedQuests; 
@property (assign,nonatomic) int numIslandSpecificQuests; 
@property (assign,nonatomic) int minLevelForQuests; 
@property (assign,nonatomic) BOOL showQuestsOnLevelSelectView; 
@property (assign,nonatomic) BOOL sortProductsDescending; 
@property (nonatomic,retain) NSArray * favorProductBackgrounds; 
@property (nonatomic,retain) NSArray * cashProductBackgrounds; 
@property (assign,nonatomic) BOOL useLowResImages; 
@property (assign,nonatomic) BOOL skipTutorialGoToMap; 
@property (assign,nonatomic) int minStarsForFreePlay; 
@property (assign,nonatomic) BOOL allowFreePlay; 
@property (assign,nonatomic) float freePlayCoinMultiplier; 
@property (nonatomic,retain) NSDictionary * defaultUiInfo; 
@property (assign,nonatomic) int tutorialWorldId; 
@property (assign,nonatomic) int defaultWorldId; 
@property (assign,nonatomic) int specialWorldId; 
@property (assign,nonatomic) int hideNewTagAfterWorldProgress; 
@property (assign,nonatomic) int islandsNeededForSpecialWorld; 
@property (assign,nonatomic) float universeMapNormalZoom; 
@property (assign,nonatomic) float universeMapInitialZoom; 
@property (assign,nonatomic) float universeMapDetailZoom; 
@property (assign,nonatomic) float universeMapPinchZoomInLimit; 
@property (assign,nonatomic) float universeMapPinchZoomOutLimit; 
@property (assign,nonatomic) float universeMapZoomSpeed; 
@property (assign,nonatomic) float worldMapNormalZoom; 
@property (assign,nonatomic) float worldMapInitialZoom; 
@property (assign,nonatomic) float worldMapDetailZoom; 
@property (assign,nonatomic) float worldMapPinchZoomInLimit; 
@property (assign,nonatomic) float worldMapPinchZoomOutLimit; 
@property (assign,nonatomic) float worldMapZoomSpeed; 
@property (assign,nonatomic) float worldMapInitialZoomSpeed; 
@property (assign,nonatomic) float mapWorldCameraRadius; 
@property (assign,nonatomic) float mapIslandCameraRadius; 
@property (assign,nonatomic) float mapWidthInTiles; 
@property (assign,nonatomic) float mapHeightInTiles; 
@property (assign,nonatomic) BOOL showWorldScore; 
@property (assign,nonatomic) int multiCrackBubbleMaxCrackTimes; 
@property (assign,nonatomic) BOOL newStarCountThresholdEnabled; 
@property (assign,nonatomic) int colorPickerDefaultLastColorsWindowSize; 
@property (assign,nonatomic) int colorPickerDefaultConsecutiveLastColorsWindowSize; 
@property (assign,nonatomic) int colorPickerDefaultMaximumConsecutiveColors; 
@property (assign,nonatomic) BOOL colorPickerUsesJavascript; 
@property (nonatomic,retain) NSDictionary * endGameSubsequentUpsellInfo; 
@property (nonatomic,retain) NSDictionary * inGameSubsequentUpsellInfo; 
@property (assign,nonatomic) BOOL specialFTUE; 
@property (nonatomic,retain) NSDictionary * particleLimits;                                          //@synthesize particleLimits=_particleLimits - In the implementation block
@property (assign,nonatomic) BOOL shouldPreauthorizeFromOutOfEnergyDialog;                           //@synthesize shouldPreauthorizeFromOutOfEnergyDialog=_shouldPreauthorizeFromOutOfEnergyDialog - In the implementation block
@property (nonatomic,retain) NSArray * itemsToHideQuantityInEog;                                     //@synthesize itemsToHideQuantityInEog=_itemsToHideQuantityInEog - In the implementation block
@property (assign,nonatomic) BOOL showNewsIconInLevelFailedDialogView;                               //@synthesize showNewsIconInLevelFailedDialogView=_showNewsIconInLevelFailedDialogView - In the implementation block
@property (assign,nonatomic) BOOL showNewsIconInLevelCompletedDialogView;                            //@synthesize showNewsIconInLevelCompletedDialogView=_showNewsIconInLevelCompletedDialogView - In the implementation block
@property (assign,nonatomic) BOOL showNewsIconInContinuePlayingDialogView;                           //@synthesize showNewsIconInContinuePlayingDialogView=_showNewsIconInContinuePlayingDialogView - In the implementation block
@property (assign,nonatomic) BOOL showNewsIconInEnergyStoreDialogView;                               //@synthesize showNewsIconInEnergyStoreDialogView=_showNewsIconInEnergyStoreDialogView - In the implementation block
@property (assign,nonatomic) int titleScreenMinLevel;                                                //@synthesize titleScreenMinLevel=_titleScreenMinLevel - In the implementation block
@property (nonatomic,retain) NSDictionary * actionParticleNames;                                     //@synthesize actionParticleNames=_actionParticleNames - In the implementation block
@property (nonatomic,retain) NSDictionary * nameChangeGemPrice;                                      //@synthesize nameChangeGemPrice=_nameChangeGemPrice - In the implementation block
@property (assign,nonatomic) int replayEventMinIslandLevel;                                          //@synthesize replayEventMinIslandLevel=_replayEventMinIslandLevel - In the implementation block
@property (assign,nonatomic) int replayLevelCompleteCount;                                           //@synthesize replayLevelCompleteCount=_replayLevelCompleteCount - In the implementation block
@property (assign,nonatomic) int replayLevelFailureCount;                                            //@synthesize replayLevelFailureCount=_replayLevelFailureCount - In the implementation block
@property (assign,nonatomic) int replayLevelSpreadOffset;                                            //@synthesize replayLevelSpreadOffset=_replayLevelSpreadOffset - In the implementation block
@property (assign,nonatomic) int replayNextLevelChance;                                              //@synthesize replayNextLevelChance=_replayNextLevelChance - In the implementation block
@property (assign,nonatomic) double puzzleCollectDuration;                                           //@synthesize puzzleCollectDuration=_puzzleCollectDuration - In the implementation block
@property (assign,nonatomic) int replayEventMaxNumLevels;                                            //@synthesize replayEventMaxNumLevels=_replayEventMaxNumLevels - In the implementation block
@property (assign,nonatomic) int replayLevelPiecesCountRandomizationPercentage;                      //@synthesize replayLevelPiecesCountRandomizationPercentage=_replayLevelPiecesCountRandomizationPercentage - In the implementation block
+(id)mutableDictionaryTypes;
+(void)load;
-(NSArray *)loots;
-(int)facebookInitialLoginBonusFavor;
-(int)leaderboardCacheTime;
-(int)minimumLeaderboardRefreshTime;
-(NSDictionary *)disablePauseBeforeCompletionLevels;
-(int)giveBackEnergyOnExitThreshold;
-(int)maximumGemsInBank;
-(int)lowBubblesAlertCount;
-(float)bubbleProjectileSpeed;
-(int)lowBubbleHugeTextCount;
-(BOOL)bubbleExperiencedUser;
-(int)tutorialLastSkippedLevel;
-(BOOL)skipTutorialGoToMap;
-(int)inventoryPowerUpCap;
-(int)inventoryPowerUpSoonThreshold;
-(BOOL)newStarCountThresholdEnabled;
-(int)maximumCoinsAwarded;
-(float)freePlayCoinMultiplier;
-(NSArray *)throwingBubbleSoundNames;
-(NSDictionary *)bubblePopSoundThresholds;
-(NSDictionary *)typeParticleMapping;
-(void)setInventoryPowerUpCap:(int)arg1 ;
-(BOOL)shouldNotShowIntroMovie;
-(void)setShouldNotShowIntroMovie:(BOOL)arg1 ;
-(void)setLeaderboardCacheTime:(int)arg1 ;
-(void)setMinimumLeaderboardRefreshTime:(int)arg1 ;
-(void)setFacebookInitialLoginBonusFavor:(int)arg1 ;
-(int)facebookScorePassedInterdialogTime;
-(void)setFacebookScorePassedInterdialogTime:(int)arg1 ;
-(NSArray *)longTermPowerUpsInShop;
-(void)setLongTermPowerUpsInShop:(NSArray *)arg1 ;
-(NSString *)userLevelUpParticleScheme;
-(void)setUserLevelUpParticleScheme:(NSString *)arg1 ;
-(int)userLevelUpParticleCycles;
-(void)setUserLevelUpParticleCycles:(int)arg1 ;
-(float)userLevelUpAnimationDuration;
-(void)setUserLevelUpAnimationDuration:(float)arg1 ;
-(NSMutableDictionary *)appleStoreGemProducts;
-(void)setAppleStoreGemProducts:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)appleStorePackageNames;
-(void)setAppleStorePackageNames:(NSMutableDictionary *)arg1 ;
-(NSString *)discountCoinPackageProductId;
-(void)setDiscountCoinPackageProductId:(NSString *)arg1 ;
-(int)discountCoinPackageNumber;
-(void)setDiscountCoinPackageNumber:(int)arg1 ;
-(float)bubbleCollisionDiameter;
-(void)setBubbleCollisionDiameter:(float)arg1 ;
-(void)setBubbleProjectileSpeed:(float)arg1 ;
-(int)poisonCount;
-(void)setPoisonCount:(int)arg1 ;
-(int)inkCount;
-(void)setInkCount:(int)arg1 ;
-(int)plusCount;
-(void)setPlusCount:(int)arg1 ;
-(int)blowerBlockerCount;
-(void)setBlowerBlockerCount:(int)arg1 ;
-(int)flamethrowerCount;
-(void)setFlamethrowerCount:(int)arg1 ;
-(float)paintSplashRadius;
-(void)setPaintSplashRadius:(float)arg1 ;
-(int)blowerGoalChance;
-(void)setBlowerGoalChance:(int)arg1 ;
-(int)minimumRowClearance;
-(void)setMinimumRowClearance:(int)arg1 ;
-(int)maximumGuideLineLength;
-(void)setMaximumGuideLineLength:(int)arg1 ;
-(NSString *)defaultPopParticle;
-(void)setDefaultPopParticle:(NSString *)arg1 ;
-(void)setTypeParticleMapping:(NSDictionary *)arg1 ;
-(void)setLowBubblesAlertCount:(int)arg1 ;
-(int)maximumGameHeight;
-(void)setMaximumGameHeight:(int)arg1 ;
-(int)maximumBabiesOnScreen;
-(void)setMaximumBabiesOnScreen:(int)arg1 ;
-(NSArray *)mapMotionFilesToPreload;
-(void)setMapMotionFilesToPreload:(NSArray *)arg1 ;
-(NSArray *)levelStartMotionFilesToPreload;
-(void)setLevelStartMotionFilesToPreload:(NSArray *)arg1 ;
-(float)snowFlakeRadius;
-(void)setSnowFlakeRadius:(float)arg1 ;
-(float)snowFlakeFragmentSpeed;
-(void)setSnowFlakeFragmentSpeed:(float)arg1 ;
-(int)snowFlakeTargetCount;
-(void)setSnowFlakeTargetCount:(int)arg1 ;
-(float)mapPinchZoomAnimationThreshold;
-(void)setMapPinchZoomAnimationThreshold:(float)arg1 ;
-(int)bubbleAppleAppId;
-(void)setBubbleAppleAppId:(int)arg1 ;
-(NSString *)bubbleInstallUrl;
-(void)setBubbleInstallUrl:(NSString *)arg1 ;
-(NSDictionary *)hugeTextJsonMapping;
-(void)setHugeTextJsonMapping:(NSDictionary *)arg1 ;
-(NSDictionary *)hugeTextChainMapping;
-(void)setHugeTextChainMapping:(NSDictionary *)arg1 ;
-(int)maxHugeTextChainCount;
-(void)setMaxHugeTextChainCount:(int)arg1 ;
-(int)minHugeTextBigPopCount;
-(void)setMinHugeTextBigPopCount:(int)arg1 ;
-(int)minHugeTextHugePopCount;
-(void)setMinHugeTextHugePopCount:(int)arg1 ;
-(int)minHugeTextBigDropCount;
-(void)setMinHugeTextBigDropCount:(int)arg1 ;
-(int)minHugeTextHugeDropCount;
-(void)setMinHugeTextHugeDropCount:(int)arg1 ;
-(void)setLowBubbleHugeTextCount:(int)arg1 ;
-(int)energyIncrement;
-(void)setEnergyIncrement:(int)arg1 ;
-(int)energyRecoveryTime;
-(void)setEnergyRecoveryTime:(int)arg1 ;
-(int)levelEnergyCost;
-(void)setLevelEnergyCost:(int)arg1 ;
-(int)energyRefillItemId;
-(void)setEnergyRefillItemId:(int)arg1 ;
-(void)setGiveBackEnergyOnExitThreshold:(int)arg1 ;
-(int)maximumBubblesRemainingToLaunch;
-(void)setMaximumBubblesRemainingToLaunch:(int)arg1 ;
-(int)bubblesRemainingScore;
-(void)setBubblesRemainingScore:(int)arg1 ;
-(int)bubblesRemovedScoreMultiplier;
-(void)setBubblesRemovedScoreMultiplier:(int)arg1 ;
-(int)bubblesDroppedScoreMultiplier;
-(void)setBubblesDroppedScoreMultiplier:(int)arg1 ;
-(int)bubblesGoalScoreMultiplier;
-(void)setBubblesGoalScoreMultiplier:(int)arg1 ;
-(int)bubblesRemovedBonusMinCount;
-(void)setBubblesRemovedBonusMinCount:(int)arg1 ;
-(NSString *)bubblesRemovedBonusTiersMultipliersString;
-(void)setBubblesRemovedBonusTiersMultipliersString:(NSString *)arg1 ;
-(int)bubblesDroppedBonusMinCount;
-(void)setBubblesDroppedBonusMinCount:(int)arg1 ;
-(NSString *)bubblesDroppedBonusTiersMultipliersString;
-(void)setBubblesDroppedBonusTiersMultipliersString:(NSString *)arg1 ;
-(int)bubblesChainBonusMinCount;
-(void)setBubblesChainBonusMinCount:(int)arg1 ;
-(NSString *)bubblesChainBonusTiersMultipliersString;
-(void)setBubblesChainBonusTiersMultipliersString:(NSString *)arg1 ;
-(NSString *)bubblesChainDroppedBonusTiersMultipliersString;
-(void)setBubblesChainDroppedBonusTiersMultipliersString:(NSString *)arg1 ;
-(NSString *)bubblesRemainingBonusTiersMultipliersString;
-(void)setBubblesRemainingBonusTiersMultipliersString:(NSString *)arg1 ;
-(int)chainMissPenalty;
-(void)setChainMissPenalty:(int)arg1 ;
-(int)dropChainMissPenalty;
-(void)setDropChainMissPenalty:(int)arg1 ;
-(NSArray *)bubblesLevelCompleteCoinsAwards;
-(void)setBubblesLevelCompleteCoinsAwards:(NSArray *)arg1 ;
-(void)setMaximumCoinsAwarded:(int)arg1 ;
-(int)maximumCoinsInBank;
-(void)setMaximumCoinsInBank:(int)arg1 ;
-(void)setMaximumGemsInBank:(int)arg1 ;
-(int)maximumStarsToDisplay;
-(void)setMaximumStarsToDisplay:(int)arg1 ;
-(BOOL)alwaysShowTutorial;
-(void)setAlwaysShowTutorial:(BOOL)arg1 ;
-(float)tutorialInterdialogTime;
-(void)setTutorialInterdialogTime:(float)arg1 ;
-(BOOL)tutorialEnabled;
-(void)setTutorialEnabled:(BOOL)arg1 ;
-(float)tutorialTapRadius;
-(void)setTutorialTapRadius:(float)arg1 ;
-(void)setBubbleExperiencedUser:(BOOL)arg1 ;
-(void)setDisablePauseBeforeCompletionLevels:(NSDictionary *)arg1 ;
-(void)setTutorialLastSkippedLevel:(int)arg1 ;
-(NSString *)mapBackgroundTexturePath;
-(void)setMapBackgroundTexturePath:(NSString *)arg1 ;
-(NSString *)dispenserBackTexturePath;
-(void)setDispenserBackTexturePath:(NSString *)arg1 ;
-(NSString *)dispenserFrontTexturePath;
-(void)setDispenserFrontTexturePath:(NSString *)arg1 ;
-(NSString *)avatarIdleSchemePrefix;
-(void)setAvatarIdleSchemePrefix:(NSString *)arg1 ;
-(NSString *)avatarThrowingSchemePrefix;
-(void)setAvatarThrowingSchemePrefix:(NSString *)arg1 ;
-(NSString *)avatarIdleTransitionSchemePrefix;
-(void)setAvatarIdleTransitionSchemePrefix:(NSString *)arg1 ;
-(int)avatarNervousThreshold;
-(void)setAvatarNervousThreshold:(int)arg1 ;
-(NSString *)avatarNervousIdleSchemePrefix;
-(void)setAvatarNervousIdleSchemePrefix:(NSString *)arg1 ;
-(NSString *)avatarNervousThrowingSchemePrefix;
-(void)setAvatarNervousThrowingSchemePrefix:(NSString *)arg1 ;
-(NSString *)avatarNervousIdleTransitionSchemePrefix;
-(void)setAvatarNervousIdleTransitionSchemePrefix:(NSString *)arg1 ;
-(void)setThrowingBubbleSoundNames:(NSArray *)arg1 ;
-(void)setBubblePopSoundThresholds:(NSDictionary *)arg1 ;
-(NSString *)scoreCalculatorScript;
-(void)setScoreCalculatorScript:(NSString *)arg1 ;
-(NSString *)colorPickerScript;
-(void)setColorPickerScript:(NSString *)arg1 ;
-(BOOL)useLowResImages;
-(void)setUseLowResImages:(BOOL)arg1 ;
-(void)setSkipTutorialGoToMap:(BOOL)arg1 ;
-(int)treasureKeyFavorAmount;
-(void)setTreasureKeyFavorAmount:(int)arg1 ;
-(int)treasureKeyCashAmount;
-(void)setTreasureKeyCashAmount:(int)arg1 ;
-(void)setLoots:(NSArray *)arg1 ;
-(NSDictionary *)treasureCashMultiplier;
-(void)setTreasureCashMultiplier:(NSDictionary *)arg1 ;
-(NSDictionary *)continuePlayingDialogInfo;
-(void)setContinuePlayingDialogInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)unlockThresholdIslandDialogInfo;
-(void)setUnlockThresholdIslandDialogInfo:(NSDictionary *)arg1 ;
-(BOOL)useGemsToUnlockIsland;
-(void)setUseGemsToUnlockIsland:(BOOL)arg1 ;
-(BOOL)useFixedGemCostToUnlockIsland;
-(void)setUseFixedGemCostToUnlockIsland:(BOOL)arg1 ;
-(int)maxStarsForPurchaseToUnlockIsland;
-(void)setMaxStarsForPurchaseToUnlockIsland:(int)arg1 ;
-(float)gemCostForEachStarToUnlockIsland;
-(void)setGemCostForEachStarToUnlockIsland:(float)arg1 ;
-(int)fixedGemCostToUnlockIsland;
-(void)setFixedGemCostToUnlockIsland:(int)arg1 ;
-(NSDictionary *)outOfGemDialogInfo;
-(void)setOutOfGemDialogInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)outOfCoinDialogInfo;
-(void)setOutOfCoinDialogInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)outOfEnergyDialogInfo;
-(void)setOutOfEnergyDialogInfo:(NSDictionary *)arg1 ;
-(int)coinUpSellStepCount;
-(void)setCoinUpSellStepCount:(int)arg1 ;
-(int)gemUpSellStepCount;
-(void)setGemUpSellStepCount:(int)arg1 ;
-(int)earthquakeRadius;
-(void)setEarthquakeRadius:(int)arg1 ;
-(float)earthquakeDuration;
-(void)setEarthquakeDuration:(float)arg1 ;
-(float)earthquakeMagnitude;
-(void)setEarthquakeMagnitude:(float)arg1 ;
-(int)earthquakeMaxDrop;
-(void)setEarthquakeMaxDrop:(int)arg1 ;
-(int)earthquakeMinDrop;
-(void)setEarthquakeMinDrop:(int)arg1 ;
-(int)numFeaturedQuests;
-(void)setNumFeaturedQuests:(int)arg1 ;
-(int)numIslandSpecificQuests;
-(void)setNumIslandSpecificQuests:(int)arg1 ;
-(int)minLevelForQuests;
-(void)setMinLevelForQuests:(int)arg1 ;
-(BOOL)showQuestsOnLevelSelectView;
-(void)setShowQuestsOnLevelSelectView:(BOOL)arg1 ;
-(BOOL)sortProductsDescending;
-(void)setSortProductsDescending:(BOOL)arg1 ;
-(NSArray *)cashProductBackgrounds;
-(void)setCashProductBackgrounds:(NSArray *)arg1 ;
-(NSArray *)favorProductBackgrounds;
-(void)setFavorProductBackgrounds:(NSArray *)arg1 ;
-(int)minStarsForFreePlay;
-(void)setMinStarsForFreePlay:(int)arg1 ;
-(BOOL)allowFreePlay;
-(void)setAllowFreePlay:(BOOL)arg1 ;
-(void)setFreePlayCoinMultiplier:(float)arg1 ;
-(NSDictionary *)defaultUiInfo;
-(void)setDefaultUiInfo:(NSDictionary *)arg1 ;
-(int)tutorialWorldId;
-(void)setTutorialWorldId:(int)arg1 ;
-(int)defaultWorldId;
-(void)setDefaultWorldId:(int)arg1 ;
-(int)specialWorldId;
-(void)setSpecialWorldId:(int)arg1 ;
-(int)hideNewTagAfterWorldProgress;
-(void)setHideNewTagAfterWorldProgress:(int)arg1 ;
-(int)islandsNeededForSpecialWorld;
-(void)setIslandsNeededForSpecialWorld:(int)arg1 ;
-(float)universeMapNormalZoom;
-(void)setUniverseMapNormalZoom:(float)arg1 ;
-(float)universeMapInitialZoom;
-(void)setUniverseMapInitialZoom:(float)arg1 ;
-(float)universeMapDetailZoom;
-(void)setUniverseMapDetailZoom:(float)arg1 ;
-(float)universeMapPinchZoomInLimit;
-(void)setUniverseMapPinchZoomInLimit:(float)arg1 ;
-(float)universeMapPinchZoomOutLimit;
-(void)setUniverseMapPinchZoomOutLimit:(float)arg1 ;
-(float)universeMapZoomSpeed;
-(void)setUniverseMapZoomSpeed:(float)arg1 ;
-(float)worldMapNormalZoom;
-(void)setWorldMapNormalZoom:(float)arg1 ;
-(float)worldMapInitialZoom;
-(void)setWorldMapInitialZoom:(float)arg1 ;
-(float)worldMapDetailZoom;
-(void)setWorldMapDetailZoom:(float)arg1 ;
-(float)worldMapPinchZoomInLimit;
-(void)setWorldMapPinchZoomInLimit:(float)arg1 ;
-(float)worldMapPinchZoomOutLimit;
-(void)setWorldMapPinchZoomOutLimit:(float)arg1 ;
-(float)worldMapZoomSpeed;
-(void)setWorldMapZoomSpeed:(float)arg1 ;
-(float)worldMapInitialZoomSpeed;
-(void)setWorldMapInitialZoomSpeed:(float)arg1 ;
-(float)mapWorldCameraRadius;
-(void)setMapWorldCameraRadius:(float)arg1 ;
-(float)mapIslandCameraRadius;
-(void)setMapIslandCameraRadius:(float)arg1 ;
-(float)mapWidthInTiles;
-(void)setMapWidthInTiles:(float)arg1 ;
-(float)mapHeightInTiles;
-(void)setMapHeightInTiles:(float)arg1 ;
-(BOOL)showWorldScore;
-(void)setShowWorldScore:(BOOL)arg1 ;
-(int)multiCrackBubbleMaxCrackTimes;
-(void)setMultiCrackBubbleMaxCrackTimes:(int)arg1 ;
-(void)setNewStarCountThresholdEnabled:(BOOL)arg1 ;
-(int)colorPickerDefaultLastColorsWindowSize;
-(void)setColorPickerDefaultLastColorsWindowSize:(int)arg1 ;
-(int)colorPickerDefaultConsecutiveLastColorsWindowSize;
-(void)setColorPickerDefaultConsecutiveLastColorsWindowSize:(int)arg1 ;
-(int)colorPickerDefaultMaximumConsecutiveColors;
-(void)setColorPickerDefaultMaximumConsecutiveColors:(int)arg1 ;
-(BOOL)colorPickerUsesJavascript;
-(void)setColorPickerUsesJavascript:(BOOL)arg1 ;
-(NSDictionary *)endGameSubsequentUpsellInfo;
-(void)setEndGameSubsequentUpsellInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)inGameSubsequentUpsellInfo;
-(void)setInGameSubsequentUpsellInfo:(NSDictionary *)arg1 ;
-(BOOL)specialFTUE;
-(void)setSpecialFTUE:(BOOL)arg1 ;
-(void)setInventoryPowerUpSoonThreshold:(int)arg1 ;
-(NSDictionary *)inventoryLowestLevelForBonusType;
-(void)setInventoryLowestLevelForBonusType:(NSDictionary *)arg1 ;
-(int)maximumGuideLineShortLength;
-(void)setMaximumGuideLineShortLength:(int)arg1 ;
-(int)maxPointsInShortGuideLine;
-(void)setMaxPointsInShortGuideLine:(int)arg1 ;
-(BOOL)allowOverMaxEnergy;
-(void)setAllowOverMaxEnergy:(BOOL)arg1 ;
-(int)bubblesPoppedScoreMultiplier;
-(void)setBubblesPoppedScoreMultiplier:(int)arg1 ;
-(NSArray *)bubblesPoppedBonusTiers;
-(void)setBubblesPoppedBonusTiers:(NSArray *)arg1 ;
-(NSArray *)bubblesDroppedBonusTiers;
-(void)setBubblesDroppedBonusTiers:(NSArray *)arg1 ;
-(NSArray *)bubblesChainBonusTiers;
-(void)setBubblesChainBonusTiers:(NSArray *)arg1 ;
-(NSArray *)bubblesChainDroppedBonusTiers;
-(void)setBubblesChainDroppedBonusTiers:(NSArray *)arg1 ;
-(NSDictionary *)particleLimits;
-(void)setParticleLimits:(NSDictionary *)arg1 ;
-(BOOL)shouldPreauthorizeFromOutOfEnergyDialog;
-(void)setShouldPreauthorizeFromOutOfEnergyDialog:(BOOL)arg1 ;
-(NSArray *)itemsToHideQuantityInEog;
-(void)setItemsToHideQuantityInEog:(NSArray *)arg1 ;
-(BOOL)showNewsIconInLevelFailedDialogView;
-(void)setShowNewsIconInLevelFailedDialogView:(BOOL)arg1 ;
-(BOOL)showNewsIconInLevelCompletedDialogView;
-(void)setShowNewsIconInLevelCompletedDialogView:(BOOL)arg1 ;
-(BOOL)showNewsIconInContinuePlayingDialogView;
-(void)setShowNewsIconInContinuePlayingDialogView:(BOOL)arg1 ;
-(BOOL)showNewsIconInEnergyStoreDialogView;
-(void)setShowNewsIconInEnergyStoreDialogView:(BOOL)arg1 ;
-(int)titleScreenMinLevel;
-(void)setTitleScreenMinLevel:(int)arg1 ;
-(NSDictionary *)actionParticleNames;
-(void)setActionParticleNames:(NSDictionary *)arg1 ;
-(NSDictionary *)nameChangeGemPrice;
-(void)setNameChangeGemPrice:(NSDictionary *)arg1 ;
-(int)replayEventMinIslandLevel;
-(void)setReplayEventMinIslandLevel:(int)arg1 ;
-(int)replayLevelCompleteCount;
-(void)setReplayLevelCompleteCount:(int)arg1 ;
-(int)replayLevelFailureCount;
-(void)setReplayLevelFailureCount:(int)arg1 ;
-(int)replayLevelSpreadOffset;
-(void)setReplayLevelSpreadOffset:(int)arg1 ;
-(int)replayNextLevelChance;
-(void)setReplayNextLevelChance:(int)arg1 ;
-(double)puzzleCollectDuration;
-(void)setPuzzleCollectDuration:(double)arg1 ;
-(int)replayEventMaxNumLevels;
-(void)setReplayEventMaxNumLevels:(int)arg1 ;
-(int)replayLevelPiecesCountRandomizationPercentage;
-(void)setReplayLevelPiecesCountRandomizationPercentage:(int)arg1 ;
-(void)dealloc;
@end
