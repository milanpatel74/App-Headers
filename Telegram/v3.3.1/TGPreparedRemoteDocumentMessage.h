//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGPreparedMessage.h"

@class NSArray, NSString, TGImageInfo, TGMessage;

@interface TGPreparedRemoteDocumentMessage : TGPreparedMessage
{
    int _datacenterId;
    int _userId;
    int _documentDate;
    int _size;
    long long _documentId;
    long long _accessHash;
    NSString *_mimeType;
    TGImageInfo *_thumbnailInfo;
    NSArray *_attributes;
    TGMessage *_replyMessage;
}

@property(retain, nonatomic) TGMessage *replyMessage; // @synthesize replyMessage=_replyMessage;
@property(retain, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) TGImageInfo *thumbnailInfo; // @synthesize thumbnailInfo=_thumbnailInfo;
@property(nonatomic) int size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(nonatomic) int documentDate; // @synthesize documentDate=_documentDate;
@property(nonatomic) int userId; // @synthesize userId=_userId;
@property(nonatomic) int datacenterId; // @synthesize datacenterId=_datacenterId;
@property(nonatomic) long long accessHash; // @synthesize accessHash=_accessHash;
@property(nonatomic) long long documentId; // @synthesize documentId=_documentId;
- (void).cxx_destruct;
- (id)message;
- (id)initWithDocumentMedia:(id)arg1 replyMessage:(id)arg2;

@end
