/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMapSnapshotOverlayProvider.h>

@class NSArray, UIImage, NSString;

@interface FBMapSnapshotAnnotationPointsOverlay : NSObject <FBMapSnapshotOverlayProvider> {

	NSArray* _points;
	UIImage* _image;
	NSString* _imageIdentifier;
	CGPoint _centerOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnnotationPoints:(id)arg1 image:(id)arg2 imageIdentifier:(id)arg3 centerOffset:(CGPoint)arg4 ;
-(id)addOverlayForSnapshot:(id)arg1 toContext:(CGContextRef)arg2 ;
-(id)diskCacheKey;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
