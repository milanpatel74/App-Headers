/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBPhotoPromptInInlineComposerExperimentContext : FBExperimentContext {

	BOOL _enablePhotoPrompts;
	BOOL _enableHiddenState;
	BOOL _supportVideo;
	BOOL _enableMultiSelection;
	BOOL _useNextTextForDoneButton;
	unsigned long long _numberOfPhotosToReturn;
	double _timeSinceLastPhotoTaken;
	double _sizeOfThumbnail;
	unsigned long long _numberOfNewPhotosNeeded;
	double _timeSinceLastPhotoReminderImpression;
	double _maxTimeSinceLastPhotoReminderImpression;
	double _waitTimeFromLastPhotoPost;
	unsigned long long _maxDismissTimesForVisibleState;
	double _timeForHiddenState;

}

@property (nonatomic,readonly) BOOL enablePhotoPrompts;                                        //@synthesize enablePhotoPrompts=_enablePhotoPrompts - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPhotosToReturn;                      //@synthesize numberOfPhotosToReturn=_numberOfPhotosToReturn - In the implementation block
@property (nonatomic,readonly) double timeSinceLastPhotoTaken;                                 //@synthesize timeSinceLastPhotoTaken=_timeSinceLastPhotoTaken - In the implementation block
@property (nonatomic,readonly) double sizeOfThumbnail;                                         //@synthesize sizeOfThumbnail=_sizeOfThumbnail - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfNewPhotosNeeded;                     //@synthesize numberOfNewPhotosNeeded=_numberOfNewPhotosNeeded - In the implementation block
@property (nonatomic,readonly) double timeSinceLastPhotoReminderImpression;                    //@synthesize timeSinceLastPhotoReminderImpression=_timeSinceLastPhotoReminderImpression - In the implementation block
@property (nonatomic,readonly) double maxTimeSinceLastPhotoReminderImpression;                 //@synthesize maxTimeSinceLastPhotoReminderImpression=_maxTimeSinceLastPhotoReminderImpression - In the implementation block
@property (nonatomic,readonly) double waitTimeFromLastPhotoPost;                               //@synthesize waitTimeFromLastPhotoPost=_waitTimeFromLastPhotoPost - In the implementation block
@property (nonatomic,readonly) BOOL enableHiddenState;                                         //@synthesize enableHiddenState=_enableHiddenState - In the implementation block
@property (nonatomic,readonly) BOOL supportVideo;                                              //@synthesize supportVideo=_supportVideo - In the implementation block
@property (nonatomic,readonly) BOOL enableMultiSelection;                                      //@synthesize enableMultiSelection=_enableMultiSelection - In the implementation block
@property (nonatomic,readonly) BOOL useNextTextForDoneButton;                                  //@synthesize useNextTextForDoneButton=_useNextTextForDoneButton - In the implementation block
@property (nonatomic,readonly) unsigned long long maxDismissTimesForVisibleState;              //@synthesize maxDismissTimesForVisibleState=_maxDismissTimesForVisibleState - In the implementation block
@property (nonatomic,readonly) double timeForHiddenState;                                      //@synthesize timeForHiddenState=_timeForHiddenState - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(double)sizeOfThumbnail;
-(BOOL)enablePhotoPrompts;
-(unsigned long long)numberOfPhotosToReturn;
-(double)timeSinceLastPhotoTaken;
-(unsigned long long)numberOfNewPhotosNeeded;
-(double)timeSinceLastPhotoReminderImpression;
-(double)maxTimeSinceLastPhotoReminderImpression;
-(double)waitTimeFromLastPhotoPost;
-(BOOL)enableHiddenState;
-(BOOL)supportVideo;
-(BOOL)enableMultiSelection;
-(BOOL)useNextTextForDoneButton;
-(unsigned long long)maxDismissTimesForVisibleState;
-(double)timeForHiddenState;
@end
