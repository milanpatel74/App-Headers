/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBProductionPromptMeidaAttachmentExperimentContext : FBExperimentContext {

	BOOL _meidaAttachmentPromptEnabled;
	NSString* _pickerTitle;
	NSString* _songsJson;

}

@property (nonatomic,readonly) BOOL meidaAttachmentPromptEnabled;              //@synthesize meidaAttachmentPromptEnabled=_meidaAttachmentPromptEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * pickerTitle;                    //@synthesize pickerTitle=_pickerTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * songsJson;                      //@synthesize songsJson=_songsJson - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(NSString *)pickerTitle;
-(id)songs;
-(BOOL)meidaAttachmentPromptEnabled;
-(NSString *)songsJson;
@end
