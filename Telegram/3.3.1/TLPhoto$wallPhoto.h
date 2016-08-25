//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLPhoto.h"

@class NSArray, NSString, TLGeoPoint;

@interface TLPhoto$wallPhoto : TLPhoto
{
    _Bool _unread;
    int _user_id;
    int _date;
    long long _access_hash;
    NSString *_caption;
    TLGeoPoint *_geo;
    NSArray *_sizes;
}

@property(retain, nonatomic) NSArray *sizes; // @synthesize sizes=_sizes;
@property(nonatomic) _Bool unread; // @synthesize unread=_unread;
@property(retain, nonatomic) TLGeoPoint *geo; // @synthesize geo=_geo;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(nonatomic) int date; // @synthesize date=_date;
@property(nonatomic) int user_id; // @synthesize user_id=_user_id;
@property(nonatomic) long long access_hash; // @synthesize access_hash=_access_hash;
- (void).cxx_destruct;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end
