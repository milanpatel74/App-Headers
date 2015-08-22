/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSString, NSArray, NSAttributedString, MNMomentsAppInviteLoggingData;

@interface MNMomentsAppInviteAttachmentViewModel : FBValueObject <NSCopying, NSCoding> {

	BOOL _hasInstalledMoments;
	NSString* _title;
	NSString* _body;
	NSString* _callToActionText;
	NSString* _callToActionURLString;
	NSArray* _imageSources;
	NSString* _appStoreID;
	NSString* _clickBehaviorType;
	NSAttributedString* _socialSentence;
	NSArray* _supportingImagesURLStrings;
	MNMomentsAppInviteLoggingData* _loggingData;

}

@property (nonatomic,copy,readonly) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                                          //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * callToActionText;                              //@synthesize callToActionText=_callToActionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * callToActionURLString;                         //@synthesize callToActionURLString=_callToActionURLString - In the implementation block
@property (nonatomic,readonly) BOOL hasInstalledMoments;                                      //@synthesize hasInstalledMoments=_hasInstalledMoments - In the implementation block
@property (nonatomic,copy,readonly) NSArray * imageSources;                                   //@synthesize imageSources=_imageSources - In the implementation block
@property (nonatomic,copy,readonly) NSString * appStoreID;                                    //@synthesize appStoreID=_appStoreID - In the implementation block
@property (nonatomic,copy,readonly) NSString * clickBehaviorType;                             //@synthesize clickBehaviorType=_clickBehaviorType - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * socialSentence;                      //@synthesize socialSentence=_socialSentence - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportingImagesURLStrings;                     //@synthesize supportingImagesURLStrings=_supportingImagesURLStrings - In the implementation block
@property (nonatomic,copy,readonly) MNMomentsAppInviteLoggingData * loggingData;              //@synthesize loggingData=_loggingData - In the implementation block
-(NSString *)callToActionText;
-(NSArray *)imageSources;
-(NSString *)callToActionURLString;
-(BOOL)hasInstalledMoments;
-(NSString *)clickBehaviorType;
-(NSString *)appStoreID;
-(NSArray *)supportingImagesURLStrings;
-(NSAttributedString *)socialSentence;
-(id)initWithTitle:(id)arg1 body:(id)arg2 callToActionText:(id)arg3 callToActionURLString:(id)arg4 hasInstalledMoments:(BOOL)arg5 imageSources:(id)arg6 appStoreID:(id)arg7 clickBehaviorType:(id)arg8 socialSentence:(id)arg9 supportingImagesURLStrings:(id)arg10 loggingData:(id)arg11 ;
-(MNMomentsAppInviteLoggingData *)loggingData;
-(NSString *)title;
-(NSString *)body;
@end
