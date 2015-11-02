/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/XMPPStanza.h>

@class NSDate, NSString, NSData;

@interface XMPPMessageStanza : XMPPStanza {

	NSDate* _timeOfArrival;

}

@property (nonatomic,readonly) BOOL broadcast; 
@property (assign,nonatomic) unsigned long long type; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,readonly) NSString * nickname; 
@property (assign,nonatomic) unsigned long long mediaType; 
@property (nonatomic,retain) NSString * mediaURL; 
@property (nonatomic,readonly) NSString * mediaHostIp; 
@property (nonatomic,retain) NSString * mediaName; 
@property (assign,nonatomic) long long mediaDuration; 
@property (assign,nonatomic) unsigned long long mediaOrigin; 
@property (nonatomic,retain) NSData * thumbnailData; 
@property (assign,nonatomic) long long fileSize; 
@property (nonatomic,retain) NSString * fileHash; 
@property (nonatomic,retain) NSString * vCardStringValue; 
@property (nonatomic,retain) NSString * vCardContactName; 
@property (nonatomic,retain) NSString * locationLatitude; 
@property (nonatomic,retain) NSString * locationLongitude; 
@property (nonatomic,retain) NSString * locationName; 
@property (nonatomic,copy) NSString * mediaTitle; 
@property (nonatomic,copy) NSString * mediaCollectionName; 
@property (nonatomic,copy) NSString * mediaAuthorName; 
@property (nonatomic,copy) NSString * mediaCaption; 
@property (nonatomic,copy) NSString * mediaReason; 
@property (nonatomic,copy) NSString * mediaText; 
@property (nonatomic,copy) NSString * mediaMatchedText; 
@property (nonatomic,copy) NSString * mediaDescription; 
@property (nonatomic,copy) NSString * mediaCanonicalURL; 
@property (nonatomic,readonly) BOOL containsValidWebPageMessage; 
@property (nonatomic,retain) NSDate * timeOfArrival;                          //@synthesize timeOfArrival=_timeOfArrival - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueKey; 
+(unsigned long long)messageTypeFromXMPPMediaType:(unsigned long long)arg1 ;
+(id)createMessageTo:(id)arg1 ;
+(id)stringsForTypes;
+(unsigned long long)xmppMediaTypeFromMessageType:(unsigned long long)arg1 ;
+(id)stringForType:(unsigned long long)arg1 ;
+(unsigned long long)typeForString:(id)arg1 ;
-(BOOL)containsValidWebPageMessage;
-(NSString *)mediaMatchedText;
-(NSString *)mediaDescription;
-(NSString *)mediaCanonicalURL;
-(NSString *)mediaHostIp;
-(long long)mediaDuration;
-(NSString *)mediaAuthorName;
-(NSString *)mediaCollectionName;
-(NSString *)mediaCaption;
-(unsigned long long)mediaOrigin;
-(void)setMediaOrigin:(unsigned long long)arg1 ;
-(NSString *)vCardContactName;
-(NSString *)vCardStringValue;
-(id)initWithFromJID:(id)arg1 toJID:(id)arg2 type:(unsigned long long)arg3 ;
-(void)addBroadcastListInfoWithName:(id)arg1 recipientJIDs:(id)arg2 ;
-(void)copyMessageDataFromSharedItem:(id)arg1 ;
-(void)setMediaMatchedText:(NSString *)arg1 ;
-(void)setMediaCanonicalURL:(NSString *)arg1 ;
-(void)setMediaTitle:(NSString *)arg1 ;
-(void)setMediaDescription:(NSString *)arg1 ;
-(void)setVCardContactName:(NSString *)arg1 ;
-(void)setVCardStringValue:(NSString *)arg1 ;
-(void)setMediaDuration:(long long)arg1 ;
-(void)setMediaCaption:(NSString *)arg1 ;
-(void)setMediaCollectionName:(NSString *)arg1 ;
-(void)setMediaAuthorName:(NSString *)arg1 ;
-(unsigned long long)mediaTypeForString:(id)arg1 ;
-(id)stringForMediaType:(unsigned long long)arg1 ;
-(id)vcard;
-(BOOL)copyMessageDataFrom:(id)arg1 encryptIfNeeded:(BOOL)arg2 ;
-(NSString *)mediaReason;
-(void)setMediaReason:(NSString *)arg1 ;
-(NSDate *)timeOfArrival;
-(void)setTimeOfArrival:(NSDate *)arg1 ;
-(NSString *)locationLatitude;
-(NSString *)locationLongitude;
-(unsigned long long)mediaType;
-(NSString *)mediaURL;
-(void)setMediaType:(unsigned long long)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)body;
-(id)log;
-(NSString *)locationName;
-(id)media;
-(BOOL)broadcast;
-(long long)fileSize;
-(void)setLocationLatitude:(NSString *)arg1 ;
-(void)setLocationLongitude:(NSString *)arg1 ;
-(NSString *)mediaTitle;
-(NSData *)thumbnailData;
-(void)setThumbnailData:(NSData *)arg1 ;
-(NSString *)fileHash;
-(void)setFileHash:(NSString *)arg1 ;
-(void)setFileSize:(long long)arg1 ;
-(void)setMediaName:(NSString *)arg1 ;
-(NSString *)mediaName;
-(void)setLocationName:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setMediaURL:(NSString *)arg1 ;
-(NSString *)mediaText;
-(void)setMediaText:(NSString *)arg1 ;
-(NSString *)uniqueKey;
@end

