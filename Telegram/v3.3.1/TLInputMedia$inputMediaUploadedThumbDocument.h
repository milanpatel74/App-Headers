//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLInputMedia.h"

@class NSArray, NSString, TLInputFile;

@interface TLInputMedia$inputMediaUploadedThumbDocument : TLInputMedia
{
    TLInputFile *_file;
    TLInputFile *_thumb;
    NSString *_mime_type;
    NSArray *_attributes;
}

@property(retain, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *mime_type; // @synthesize mime_type=_mime_type;
@property(retain, nonatomic) TLInputFile *thumb; // @synthesize thumb=_thumb;
@property(retain, nonatomic) TLInputFile *file; // @synthesize file=_file;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end
