/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class UIImageView, UILabel;


@protocol TFNTextDataViewCell <NSObject>
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,readonly) UILabel * textLabel; 
@property (assign,nonatomic) BOOL multipleTextLines; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (assign,nonatomic) BOOL multipleDetailTextLines; 
@property (assign,nonatomic) long long verticalAlignment; 
@property (assign,nonatomic) double detailTextPadding; 
@required
-(void)setMultipleTextLines:(BOOL)arg1;
-(void)setMultipleDetailTextLines:(BOOL)arg1;
-(void)setDetailTextPadding:(double)arg1;
-(BOOL)multipleTextLines;
-(BOOL)multipleDetailTextLines;
-(double)detailTextPadding;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(UIImageView *)imageView;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1;

@end
