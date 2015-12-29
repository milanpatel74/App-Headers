//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLVideo.h"

@class NSString, TLPhotoSize;

@interface TLVideo$video : TLVideo
{
    int _date;
    int _duration;
    int _size;
    int _dc_id;
    int _w;
    int _h;
    long long _access_hash;
    NSString *_mime_type;
    TLPhotoSize *_thumb;
}

@property(nonatomic) int h; // @synthesize h=_h;
@property(nonatomic) int w; // @synthesize w=_w;
@property(nonatomic) int dc_id; // @synthesize dc_id=_dc_id;
@property(retain, nonatomic) TLPhotoSize *thumb; // @synthesize thumb=_thumb;
@property(nonatomic) int size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *mime_type; // @synthesize mime_type=_mime_type;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) int date; // @synthesize date=_date;
@property(nonatomic) long long access_hash; // @synthesize access_hash=_access_hash;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end

