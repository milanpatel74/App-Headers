//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDDictionaryBackedObject.h"

@class NSArray, NSString;

@interface GDGoogleDriveMetadata : GDDictionaryBackedObject
{
}

@property(readonly, nonatomic) NSArray *exportUrls;
@property(readonly, nonatomic) struct CGSize imageSize;
@property(readonly, copy, nonatomic) NSString *thumbnailURLString;
@property(readonly, copy, nonatomic) NSString *downloadURLString;
@property(readonly, nonatomic) long long fileSize;
@property(readonly, nonatomic, getter=isEditable) _Bool editable;
@property(readonly, nonatomic, getter=isDirectory) _Bool directory;
@property(readonly, copy, nonatomic) NSString *mimeType;
@property(readonly, copy, nonatomic) NSString *headRevisionIdentifier;
@property(readonly, copy, nonatomic) NSString *md5Checksum;
@property(readonly, copy, nonatomic) NSString *etag;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *title;

@end

