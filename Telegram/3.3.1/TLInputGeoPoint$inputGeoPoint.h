//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLInputGeoPoint.h"

@interface TLInputGeoPoint$inputGeoPoint : TLInputGeoPoint
{
    double _lat;
    double _n_long;
}

@property(nonatomic) double n_long; // @synthesize n_long=_n_long;
@property(nonatomic) double lat; // @synthesize lat=_lat;
- (void)TLfillFieldsWithValues:(map_d3ce7d86 *)arg1;
- (id)TLbuildFromMetaObject:(shared_ptr_20f5e271)arg1;
- (int)TLconstructorName;
- (int)TLconstructorSignature;

@end

