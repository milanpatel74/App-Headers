/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAMediaUploadable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDate, NSURL, NSNumber, WAMessageMetadata, NSArray, NSSet;

@interface WASharedItem : NSObject <WAMediaUploadable, NSSecureCoding> {

	int _mediaType;
	BOOL _isFileURLPermanent;
	NSString* _uniqueID;
	NSString* _stanzaID;
	float _uploadProgress;
	NSData* _mediaKey;
	NSDate* _creationDate;
	NSString* _toJID;
	NSString* _phash;
	NSString* _text;
	NSURL* _fileURL;
	long long _multiSendMediaIndex;
	long long _multiSendMediaCount;
	NSString* _mediaCollectionName;
	NSString* _vCardName;
	NSString* _vCardString;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSString* _locationName;
	NSString* _locationUrl;
	WAMessageMetadata* _metadata;
	NSData* _imageRepresentationData;
	NSNumber* _mediaWidth;
	NSNumber* _mediaHeight;
	long long _pageCount;
	NSString* _MIMEType;
	NSString* _originalFilename;
	NSString* _fileHash;
	NSArray* _broadcastListRecipientJIDs;
	NSString* _broadcastListName;
	unsigned long long _fileSize;
	long long _mediaDuration;
	NSData* _thumbnailData;
	unsigned long long _status;
	NSString* _serverMediaURL;
	NSString* _serverHash;
	long long _filteredRecipientCount;

}

@property (nonatomic,retain) NSURL * fileURL;                                 //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                         //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSString * toJID;                                  //@synthesize toJID=_toJID - In the implementation block
@property (nonatomic,copy) NSString * phash;                                  //@synthesize phash=_phash - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long multiSendMediaIndex;                   //@synthesize multiSendMediaIndex=_multiSendMediaIndex - In the implementation block
@property (assign,nonatomic) long long multiSendMediaCount;                   //@synthesize multiSendMediaCount=_multiSendMediaCount - In the implementation block
@property (nonatomic,copy) NSString * mediaCollectionName;                    //@synthesize mediaCollectionName=_mediaCollectionName - In the implementation block
@property (nonatomic,copy) NSString * vCardName;                              //@synthesize vCardName=_vCardName - In the implementation block
@property (nonatomic,copy) NSString * vCardString;                            //@synthesize vCardString=_vCardString - In the implementation block
@property (nonatomic,retain) NSNumber * latitude;                             //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSNumber * longitude;                            //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSString * locationName;                           //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,copy) NSString * locationUrl;                            //@synthesize locationUrl=_locationUrl - In the implementation block
@property (nonatomic,readonly) WAMessageMetadata * metadata;                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSData * imageRepresentationData;                  //@synthesize imageRepresentationData=_imageRepresentationData - In the implementation block
@property (nonatomic,retain) NSNumber * mediaWidth;                           //@synthesize mediaWidth=_mediaWidth - In the implementation block
@property (nonatomic,retain) NSNumber * mediaHeight;                          //@synthesize mediaHeight=_mediaHeight - In the implementation block
@property (nonatomic,readonly) long long pageCount;                           //@synthesize pageCount=_pageCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * MIMEType;                      //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalFilename;              //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,copy) NSData * mediaKey;                                 //@synthesize mediaKey=_mediaKey - In the implementation block
@property (nonatomic,copy) NSString * fileHash;                               //@synthesize fileHash=_fileHash - In the implementation block
@property (nonatomic,copy) NSArray * broadcastListRecipientJIDs;              //@synthesize broadcastListRecipientJIDs=_broadcastListRecipientJIDs - In the implementation block
@property (nonatomic,copy) NSString * broadcastListName;                      //@synthesize broadcastListName=_broadcastListName - In the implementation block
@property (nonatomic,readonly) unsigned long long fileSize;                   //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) long long mediaDuration;                       //@synthesize mediaDuration=_mediaDuration - In the implementation block
@property (nonatomic,readonly) NSData * thumbnailData;                        //@synthesize thumbnailData=_thumbnailData - In the implementation block
@property (assign,nonatomic) unsigned long long status;                       //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSString * serverMediaURL;                         //@synthesize serverMediaURL=_serverMediaURL - In the implementation block
@property (nonatomic,copy) NSString * serverHash;                             //@synthesize serverHash=_serverHash - In the implementation block
@property (assign,nonatomic) long long filteredRecipientCount;                //@synthesize filteredRecipientCount=_filteredRecipientCount - In the implementation block
@property (assign,nonatomic) float uploadProgress;                            //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NSObject><NSCopying> uniqueID; 
@property (nonatomic,copy,readonly) NSString * stanzaID; 
@property (nonatomic,copy,readonly) NSString * mediaPath; 
@property (nonatomic,readonly) int mediaType; 
@property (nonatomic,readonly) int mediaOrigin; 
@property (nonatomic,readonly) BOOL isPTT; 
@property (nonatomic,readonly) long long httpRetryCount; 
@property (nonatomic,copy,readonly) NSSet * recipientsJids; 
+(BOOL)supportsSecureCoding;
-(long long)mediaDuration;
-(NSString *)mediaCollectionName;
-(NSNumber *)mediaWidth;
-(NSNumber *)mediaHeight;
-(void)setMediaWidth:(NSNumber *)arg1 ;
-(void)setMediaHeight:(NSNumber *)arg1 ;
-(void)setMediaKey:(NSData *)arg1 ;
-(int)mediaOrigin;
-(void)setVCardName:(NSString *)arg1 ;
-(void)setVCardString:(NSString *)arg1 ;
-(BOOL)isPTT;
-(NSString *)toJID;
-(void)setToJID:(NSString *)arg1 ;
-(void)setPhash:(NSString *)arg1 ;
-(NSString *)stanzaID;
-(NSString *)vCardString;
-(void)setFilteredRecipientCount:(long long)arg1 ;
-(NSString *)phash;
-(long long)filteredRecipientCount;
-(NSString *)vCardName;
-(NSString *)locationUrl;
-(NSData *)imageRepresentationData;
-(NSString *)serverMediaURL;
-(long long)httpRetryCount;
-(void)setMediaMimeType:(id)arg1 newMediaPath:(id)arg2 ;
-(long long)multiSendMediaIndex;
-(long long)multiSendMediaCount;
-(NSSet *)recipientsJids;
-(void)setMultiSendMediaIndex:(long long)arg1 ;
-(void)setMultiSendMediaCount:(long long)arg1 ;
-(NSArray *)broadcastListRecipientJIDs;
-(NSString *)broadcastListName;
-(void)setMediaCollectionName:(NSString *)arg1 ;
-(void)setServerHash:(NSString *)arg1 ;
-(NSString *)serverHash;
-(void)prepareForSavingWithOutboxURL:(id)arg1 ;
-(void)didChangeOutboxToURL:(id)arg1 ;
-(void)prepareDocumentForUploadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prepareImageForUploadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prepareAVMediaForUploadWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithImageFileURL:(id)arg1 caption:(id)arg2 ;
-(id)initWithVideoFileURL:(id)arg1 caption:(id)arg2 ;
-(id)initWithGIFFileURL:(id)arg1 caption:(id)arg2 ;
-(id)initWithText:(id)arg1 metadata:(id)arg2 ;
-(id)initWithVCard:(id)arg1 ;
-(id)initWithAudioFileURL:(id)arg1 mimeType:(id)arg2 ;
-(id)initWithDocumentAttachment:(id)arg1 ;
-(void)prepareForUploadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLocationUrl:(NSString *)arg1 ;
-(void)setImageRepresentationData:(NSData *)arg1 ;
-(void)setBroadcastListRecipientJIDs:(NSArray *)arg1 ;
-(void)setBroadcastListName:(NSString *)arg1 ;
-(void)setServerMediaURL:(NSString *)arg1 ;
-(float)uploadProgress;
-(void)setUploadProgress:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)text;
-(NSString *)MIMEType;
-(long long)pageCount;
-(NSURL *)fileURL;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)fileSize;
-(WAMessageMetadata *)metadata;
-(id)initWithPlace:(id)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(NSString *)locationName;
-(void)setLocationName:(NSString *)arg1 ;
-(NSString *)originalFilename;
-(NSString *)fileHash;
-(void)setFileHash:(NSString *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSData *)thumbnailData;
-(int)mediaType;
-(NSDate *)creationDate;
-(NSString *)mediaPath;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(NSData *)mediaKey;
-(id<NSObject><NSCopying>)uniqueID;
@end
