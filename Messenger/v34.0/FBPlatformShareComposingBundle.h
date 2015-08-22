/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString, FBComposerAuthor, FBComposerPublishTarget, FBComposerAppAttribution;

@interface FBPlatformShareComposingBundle : FBValueObject <NSCopying> {

	NSString* _compositionID;
	FBComposerAuthor* _author;
	FBComposerPublishTarget* _publishTarget;
	NSString* _sourceType;
	FBComposerAppAttribution* _appAttribution;

}

@property (nonatomic,copy,readonly) NSString * compositionID;                               //@synthesize compositionID=_compositionID - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAuthor * author;                              //@synthesize author=_author - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPublishTarget * publishTarget;                //@synthesize publishTarget=_publishTarget - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceType;                                  //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAppAttribution * appAttribution;              //@synthesize appAttribution=_appAttribution - In the implementation block
-(FBComposerPublishTarget *)publishTarget;
-(FBComposerAppAttribution *)appAttribution;
-(NSString *)compositionID;
-(id)initWithCompositionID:(id)arg1 author:(id)arg2 publishTarget:(id)arg3 sourceType:(id)arg4 appAttribution:(id)arg5 ;
-(NSString *)sourceType;
-(FBComposerAuthor *)author;
@end
