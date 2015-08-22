/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class IGQuadtreeCluster, IGPhotoMapEditManager;

@interface PhotoMapReviewClusterSelectButton : UIButton {

	IGQuadtreeCluster* _cluster;
	IGPhotoMapEditManager* _editManager;

}

@property (nonatomic,retain) IGQuadtreeCluster * cluster;                      //@synthesize cluster=_cluster - In the implementation block
@property (nonatomic,retain) IGPhotoMapEditManager * editManager;              //@synthesize editManager=_editManager - In the implementation block
+(id)buttonWithType:(long long)arg1 cluster:(id)arg2 editManager:(id)arg3 ;
-(IGPhotoMapEditManager *)editManager;
-(void)setEditManager:(IGPhotoMapEditManager *)arg1 ;
-(void)onClusterSelectionChanged;
-(void)dealloc;
-(void)setCluster:(IGQuadtreeCluster *)arg1 ;
-(IGQuadtreeCluster *)cluster;
@end
