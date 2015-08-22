/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTableViewCell.h>
#import <Twitter/TFNTextDataViewCell.h>

@class TFNBadgeAccessory, NSString, UIImageView, UILabel;

@interface TFNTextCell : TFNTableViewCell <TFNTextDataViewCell> {

	BOOL _multipleTextLines;
	BOOL _multipleDetailTextLines;
	double _detailTextPadding;
	long long _verticalAlignment;
	TFNBadgeAccessory* _badgeAccessory;
	long long _style;

}

@property (nonatomic,retain) TFNBadgeAccessory * badgeAccessory;              //@synthesize badgeAccessory=_badgeAccessory - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;                     //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) long long style;                                 //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,readonly) UILabel * textLabel; 
@property (assign,nonatomic) BOOL multipleTextLines;                          //@synthesize multipleTextLines=_multipleTextLines - In the implementation block
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (assign,nonatomic) BOOL multipleDetailTextLines;                    //@synthesize multipleDetailTextLines=_multipleDetailTextLines - In the implementation block
@property (assign,nonatomic) double detailTextPadding;                        //@synthesize detailTextPadding=_detailTextPadding - In the implementation block
+(id)value1CellForTableView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4 accessoryType:(long long)arg5 ;
+(double)heightForStyle:(long long)arg1 text:(id)arg2 multipleLines:(BOOL)arg3 detailText:(id)arg4 multipleLines:(BOOL)arg5 tableWidth:(double)arg6 contentEdgeInsets:(UIEdgeInsets)arg7 ;
+(double)heightForStyle:(long long)arg1 text:(id)arg2 font:(id)arg3 lineBreakMode:(long long)arg4 multipleLines:(BOOL)arg5 detailText:(id)arg6 font:(id)arg7 lineBreakMode:(long long)arg8 multipleLines:(BOOL)arg9 padding:(double)arg10 tableWidth:(double)arg11 contentEdgeInsets:(UIEdgeInsets)arg12 ;
+(id)iconCellForTableView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4 icon:(id)arg5 accessoryType:(long long)arg6 ;
+(id)subtitleCellForTableView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4 accessoryType:(long long)arg5 ;
+(id)cellForTableView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 accessoryType:(long long)arg4 ;
+(double)heightForStyle:(long long)arg1 text:(id)arg2 font:(id)arg3 lineBreakMode:(long long)arg4 multipleLines:(BOOL)arg5 detailText:(id)arg6 font:(id)arg7 lineBreakMode:(long long)arg8 multipleLines:(BOOL)arg9 padding:(double)arg10 icon:(id)arg11 tableWidth:(double)arg12 contentEdgeInsets:(UIEdgeInsets)arg13 ;
+(id)badgeCellForTableView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 badgeText:(id)arg4 ;
+(double)heightForStyle:(long long)arg1 text:(id)arg2 font:(id)arg3 lineBreakMode:(long long)arg4 multipleLines:(BOOL)arg5 detailText:(id)arg6 font:(id)arg7 lineBreakMode:(long long)arg8 multipleLines:(BOOL)arg9 padding:(double)arg10 icon:(id)arg11 badgeText:(id)arg12 tableWidth:(double)arg13 contentEdgeInsets:(UIEdgeInsets)arg14 ;
+(id)_detailFontForStyle:(long long)arg1 ;
+(id)_cellForTableView:(id)arg1 style:(long long)arg2 indexPath:(id)arg3 withText:(id)arg4 detailText:(id)arg5 accessoryType:(long long)arg6 ;
+(id)_cellForTableView:(id)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3 indexPath:(id)arg4 withText:(id)arg5 detailText:(id)arg6 accessoryType:(long long)arg7 initialization:(/*^block*/id)arg8 ;
+(id)value2CellForTableView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 detailText:(id)arg4 accessoryType:(long long)arg5 ;
+(id)iconCellForTableView:(id)arg1 indexPath:(id)arg2 withText:(id)arg3 icon:(id)arg4 accessoryType:(long long)arg5 ;
-(void)setMultipleTextLines:(BOOL)arg1 ;
-(void)_configureAccessibility;
-(void)setMultipleDetailTextLines:(BOOL)arg1 ;
-(void)setDetailTextPadding:(double)arg1 ;
-(BOOL)multipleTextLines;
-(BOOL)multipleDetailTextLines;
-(double)detailTextPadding;
-(void)setBadgeAccessory:(TFNBadgeAccessory *)arg1 ;
-(TFNBadgeAccessory *)badgeAccessory;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(long long)style;
-(id)accessibilityLabel;
-(void)setStyle:(long long)arg1 ;
-(void)setSelectionStyle:(long long)arg1 ;
-(id)accessibilityValue;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
@end
