/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPMessage.h>

@class SKPAsyncVideoMediaDocument;

@interface SKPAsyncVideoMediaDocumentMessage : SKPMessage {

	BOOL _didLoadDocument;
	SKPAsyncVideoMediaDocument* _mediaDocument;

}

@property (nonatomic,retain) SKPAsyncVideoMediaDocument * mediaDocument;              //@synthesize mediaDocument=_mediaDocument - In the implementation block
@property (assign,nonatomic) BOOL didLoadDocument;                                    //@synthesize didLoadDocument=_didLoadDocument - In the implementation block
+(id)keyPathsForValuesAffectingAttributedSummary;
-(SKPAsyncVideoMediaDocument *)mediaDocument;
-(void)willSetValue:(id)arg1 forKey:(id)arg2 andUseMainQueueToSet:(BOOL)arg3 ;
-(id)attributedSummary;
-(id)otherPropertyKeysToIncludeInDebugDescription;
-(BOOL)didLoadDocument;
-(void)setDidLoadDocument:(BOOL)arg1 ;
-(void)setMediaDocument:(SKPAsyncVideoMediaDocument *)arg1 ;
-(long long)type;
@end

