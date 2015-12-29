//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGPreparedMessage.h"

@class NSArray, NSString, TGMessage;

@interface TGPreparedLocalDocumentMessage : TGPreparedMessage
{
    int _size;
    long long _localDocumentId;
    NSString *_mimeType;
    NSString *_localThumbnailDataPath;
    NSArray *_attributes;
    TGMessage *_replyMessage;
    struct CGSize _thumbnailSize;
}

+ (id)localDocumentDirectoryForDocumentId:(long long)arg1;
+ (id)localDocumentDirectoryForLocalDocumentId:(long long)arg1;
+ (id)messageWithLocalDocumentId:(long long)arg1 size:(int)arg2 mimeType:(id)arg3 localThumbnailDataPath:(id)arg4 thumbnailSize:(struct CGSize)arg5 attributes:(id)arg6;
+ (id)_fileUrlForStoredData:(id)arg1;
+ (id)messageByCopyingDataFromMedia:(id)arg1 replyMessage:(id)arg2;
+ (id)messageByCopyingDataFromMessage:(id)arg1;
+ (id)messageWithTempDocumentPath:(id)arg1 size:(int)arg2 mimeType:(id)arg3 thumbnailImage:(id)arg4 thumbnailSize:(struct CGSize)arg5 attributes:(id)arg6 replyMessage:(id)arg7;
@property(retain, nonatomic) TGMessage *replyMessage; // @synthesize replyMessage=_replyMessage;
@property(retain, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) NSString *localThumbnailDataPath; // @synthesize localThumbnailDataPath=_localThumbnailDataPath;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) long long localDocumentId; // @synthesize localDocumentId=_localDocumentId;
- (void).cxx_destruct;
- (id)message;
- (id)localDocumentFileName;
- (id)localDocumentDirectory;

@end

