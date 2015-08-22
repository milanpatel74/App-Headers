/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GPPACLTableViewCell.h>

@class GPPLabel, UISwitch;

@interface GPPDomainRestrictedTableViewCell : GPPACLTableViewCell {

	GPPLabel* _descriptionLabel;
	UISwitch* _restrictView;

}

@property (assign,nonatomic,__weak) GPPLabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) UISwitch * restrictView;                  //@synthesize restrictView=_restrictView - In the implementation block
+(id)reuseIdentifier;
-(void)setAclEntry:(id)arg1 ;
-(UISwitch *)restrictView;
-(void)setRestrictView:(UISwitch *)arg1 ;
-(GPPLabel *)descriptionLabel;
-(void)setDescriptionLabel:(GPPLabel *)arg1 ;
@end
