/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface WAMediaPickerLibraryTableViewCell : UITableViewCell {

	BOOL _bottomBorderHidden;
	UILabel* _assetCountLabel;

}

@property (assign,getter=isBottomBorderHidden,nonatomic) BOOL bottomBorderHidden;              //@synthesize bottomBorderHidden=_bottomBorderHidden - In the implementation block
@property (nonatomic,readonly) UILabel * assetCountLabel;                                      //@synthesize assetCountLabel=_assetCountLabel - In the implementation block
+(id)cellWithReuseIdentifier:(id)arg1 ;
+(long long)preferredSeparatorStyle;
+(double)preferredHeight;
-(void)setBottomBorderHidden:(BOOL)arg1 ;
-(void)configureWithAssetCollection:(id)arg1 ;
-(id)assetCountLabelTextForCount:(unsigned long long)arg1 ;
-(void)updateWithAssetCount:(unsigned long long)arg1 ;
-(BOOL)isBottomBorderHidden;
-(UILabel *)assetCountLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

