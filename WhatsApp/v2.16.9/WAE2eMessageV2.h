/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAE2eMessage.h>

@class WAPBContextInfo, NSString, NSData, WAMediaItemMetadata, NSMutableArray;

@interface WAE2eMessageV2 : WAE2eMessage {

	WAPBContextInfo* _contextInfo;
	NSString* _mediaFilePath;
	BOOL _isPTT;
	BOOL _checkOutgoingMimetype;
	BOOL _hasUserContent;
	unsigned _mediaWidth;
	unsigned _mediaHeight;
	unsigned _mediaDuration;
	unsigned _pageCount;
	NSString* _mediaUrl;
	NSString* _mediaMatchedText;
	NSString* _mediaTitle;
	NSString* _mediaText;
	NSString* _mediaDescription;
	NSData* _mediaKey;
	NSData* _mediaFileHash;
	NSString* _mediaMimeType;
	unsigned long long _mediaFileLength;
	NSData* _thumbnailData;
	double _locationLatitude;
	double _locationLongitude;
	WAMediaItemMetadata* _metadata;
	NSData* _senderKeyData;
	NSString* _senderKeyGroupId;
	NSMutableArray* _unknownTags;

}

@property (nonatomic,copy) NSString * mediaUrl;                               //@synthesize mediaUrl=_mediaUrl - In the implementation block
@property (nonatomic,copy) NSString * mediaMatchedText;                       //@synthesize mediaMatchedText=_mediaMatchedText - In the implementation block
@property (nonatomic,copy) NSString * mediaTitle;                             //@synthesize mediaTitle=_mediaTitle - In the implementation block
@property (nonatomic,copy) NSString * mediaText;                              //@synthesize mediaText=_mediaText - In the implementation block
@property (nonatomic,copy) NSString * mediaDescription;                       //@synthesize mediaDescription=_mediaDescription - In the implementation block
@property (nonatomic,copy) NSData * mediaKey;                                 //@synthesize mediaKey=_mediaKey - In the implementation block
@property (nonatomic,copy) NSData * mediaFileHash;                            //@synthesize mediaFileHash=_mediaFileHash - In the implementation block
@property (nonatomic,copy) NSString * mediaMimeType;                          //@synthesize mediaMimeType=_mediaMimeType - In the implementation block
@property (assign,nonatomic) unsigned mediaWidth;                             //@synthesize mediaWidth=_mediaWidth - In the implementation block
@property (assign,nonatomic) unsigned mediaHeight;                            //@synthesize mediaHeight=_mediaHeight - In the implementation block
@property (assign,nonatomic) unsigned mediaDuration;                          //@synthesize mediaDuration=_mediaDuration - In the implementation block
@property (assign,nonatomic) BOOL isPTT;                                      //@synthesize isPTT=_isPTT - In the implementation block
@property (assign,nonatomic) unsigned long long mediaFileLength;              //@synthesize mediaFileLength=_mediaFileLength - In the implementation block
@property (nonatomic,copy) NSData * thumbnailData;                            //@synthesize thumbnailData=_thumbnailData - In the implementation block
@property (assign,nonatomic) double locationLatitude;                         //@synthesize locationLatitude=_locationLatitude - In the implementation block
@property (assign,nonatomic) double locationLongitude;                        //@synthesize locationLongitude=_locationLongitude - In the implementation block
@property (assign,nonatomic) unsigned pageCount;                              //@synthesize pageCount=_pageCount - In the implementation block
@property (nonatomic,readonly) WAMediaItemMetadata * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL checkOutgoingMimetype;                      //@synthesize checkOutgoingMimetype=_checkOutgoingMimetype - In the implementation block
@property (assign,nonatomic) BOOL hasUserContent;                             //@synthesize hasUserContent=_hasUserContent - In the implementation block
@property (nonatomic,copy) NSData * senderKeyData;                            //@synthesize senderKeyData=_senderKeyData - In the implementation block
@property (nonatomic,copy) NSString * senderKeyGroupId;                       //@synthesize senderKeyGroupId=_senderKeyGroupId - In the implementation block
@property (nonatomic,retain) NSMutableArray * unknownTags;                    //@synthesize unknownTags=_unknownTags - In the implementation block
+(BOOL)validMediaURL:(id)arg1 ;
+(BOOL)validMediaKey:(id)arg1 ;
+(BOOL)validMediaPlaintextHash:(id)arg1 ;
-(unsigned)mediaDuration;
-(unsigned)mediaWidth;
-(unsigned)mediaHeight;
-(void)setMediaWidth:(unsigned)arg1 ;
-(void)setMediaHeight:(unsigned)arg1 ;
-(void)setMediaKey:(NSData *)arg1 ;
-(NSString *)mediaMatchedText;
-(NSString *)mediaDescription;
-(NSString *)mediaUrl;
-(unsigned long long)mediaFileLength;
-(NSString *)mediaMimeType;
-(BOOL)isPTT;
-(NSData *)mediaFileHash;
-(void)setMediaDuration:(unsigned)arg1 ;
-(void)setMediaTitle:(NSString *)arg1 ;
-(void)setMediaDescription:(NSString *)arg1 ;
-(void)setMediaMatchedText:(NSString *)arg1 ;
-(id)stringRepresentationForChat;
-(NSData *)senderKeyData;
-(NSMutableArray *)unknownTags;
-(void)setCheckOutgoingMimetype:(BOOL)arg1 ;
-(void)setSenderKeyData:(NSData *)arg1 ;
-(void)setSenderKeyGroupId:(NSString *)arg1 ;
-(void)addParticipantMessage:(id)arg1 ;
-(id)initWithSharedItem:(id)arg1 ;
-(id)initWithMessage:(id)arg1 includesReplyContext:(BOOL)arg2 ;
-(id)protobufMessage;
-(void)setUnknownTags:(NSMutableArray *)arg1 ;
-(int)addPropertiesFromUserMessageProtobuf:(id)arg1 ;
-(void)setHasUserContent:(BOOL)arg1 ;
-(void)setMediaUrl:(NSString *)arg1 ;
-(id)metadataWithContextInfo:(id)arg1 ;
-(void)setMediaFileHash:(NSData *)arg1 ;
-(void)setMediaFileLength:(unsigned long long)arg1 ;
-(void)setMediaMimeType:(NSString *)arg1 ;
-(void)setIsPTT:(BOOL)arg1 ;
-(NSString *)senderKeyGroupId;
-(BOOL)checkOutgoingMimetype;
-(BOOL)hasUserContent;
-(NSString *)mediaText;
-(void)setMediaText:(NSString *)arg1 ;
-(unsigned)pageCount;
-(int)version;
-(void)setPageCount:(unsigned)arg1 ;
-(WAMediaItemMetadata *)metadata;
-(id)dataToEncrypt;
-(id)serializedData;
-(NSString *)mediaTitle;
-(NSData *)thumbnailData;
-(void)setThumbnailData:(NSData *)arg1 ;
-(void)setLocationLatitude:(double)arg1 ;
-(void)setLocationLongitude:(double)arg1 ;
-(int)setDecryptedData:(id)arg1 ;
-(NSData *)mediaKey;
-(double)locationLatitude;
-(double)locationLongitude;
-(id)initWithMessage:(id)arg1 ;
@end
