/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/BaseSellingCategoryPathBar.h>

@class EBNCategory;

@interface SellingCategoryPathBar : BaseSellingCategoryPathBar {

	EBNCategory* _category;

}

@property (nonatomic,retain) EBNCategory * category;              //@synthesize category=_category - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCategory:(EBNCategory *)arg1 ;
-(EBNCategory *)category;
@end

