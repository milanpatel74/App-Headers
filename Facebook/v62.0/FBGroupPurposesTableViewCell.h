/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol FBGroupsInfoViewConfig;
@class FBUserSession, FBItemView;

@interface FBGroupPurposesTableViewCell : UITableViewCell {

	FBUserSession* _session;
	id<FBGroupsInfoViewConfig> _config;
	FBItemView* _itemView;

}
+(id)_buildItemViewConfigWithTitle:(id)arg1 selected:(BOOL)arg2 config:(id)arg3 imageDownloader:(id)arg4 ;
+(double)getHeightForTitle:(id)arg1 selected:(BOOL)arg2 config:(id)arg3 constrainedSize:(CGSize)arg4 ;
-(id)initWithSession:(id)arg1 reuseIdentifier:(id)arg2 config:(id)arg3 ;
-(void)updateCellWithTitle:(id)arg1 imageURL:(id)arg2 selected:(BOOL)arg3 ;
-(void)layoutSubviews;
@end
