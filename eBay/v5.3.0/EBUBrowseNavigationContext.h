/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUAppNavigationContext.h>

@protocol EBNSearchableEntity;
@class NSString;

@interface EBUBrowseNavigationContext : EBUAppNavigationContext {

	NSString* _title;
	id<EBNSearchableEntity> _searchEntity;

}

@property (nonatomic,copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) id<EBNSearchableEntity> searchEntity;              //@synthesize searchEntity=_searchEntity - In the implementation block
+(id)contextWithEntity:(id)arg1 ;
+(id)contextWithTitle:(id)arg1 entity:(id)arg2 ;
-(void)setSearchEntity:(id<EBNSearchableEntity>)arg1 ;
-(id<EBNSearchableEntity>)searchEntity;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

