//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TLObject.h"

@class NSData, NSString, TLstorage_FileType;

@interface TLupload_File : NSObject <TLObject>
{
    int _mtime;
    TLstorage_FileType *_type;
    NSData *_bytes;
}

@property(retain, nonatomic) NSData *bytes; // @synthesize bytes=_bytes;
@property(nonatomic) int mtime; // @synthesize mtime=_mtime;
@property(retain, nonatomic) TLstorage_FileType *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

