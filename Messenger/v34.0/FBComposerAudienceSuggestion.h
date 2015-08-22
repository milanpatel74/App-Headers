/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class FBComposerPrivacySetting, NSArray;

@interface FBComposerAudienceSuggestion : FBValueObject <NSCopying, NSCoding> {

	FBComposerPrivacySetting* _audience;
	NSArray* _keywordRanges;

}

@property (nonatomic,copy,readonly) FBComposerPrivacySetting * audience;              //@synthesize audience=_audience - In the implementation block
@property (nonatomic,copy,readonly) NSArray * keywordRanges;                          //@synthesize keywordRanges=_keywordRanges - In the implementation block
-(id)initWithAudience:(id)arg1 keywordRanges:(id)arg2 ;
-(NSArray *)keywordRanges;
-(FBComposerPrivacySetting *)audience;
@end
