/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle;

@interface GSDK_GTMUILocalizer : NSObject {

	id owner_;
	id otherObjectToLocalize_;
	id yetAnotherObjectToLocalize_;
	NSBundle* bundle_;

}

@property (assign,nonatomic) id owner; 
@property (assign,nonatomic) id otherObjectToLocalize; 
@property (assign,nonatomic) id yetAnotherObjectToLocalize; 
+(id)bundleForOwner:(id)arg1 ;
-(void)localizeObject:(id)arg1 recursively:(BOOL)arg2 ;
-(id)otherObjectToLocalize;
-(id)yetAnotherObjectToLocalize;
-(void)setOtherObjectToLocalize:(id)arg1 ;
-(void)setYetAnotherObjectToLocalize:(id)arg1 ;
-(void)localizeView:(id)arg1 recursively:(BOOL)arg2 ;
-(void)localizeToolbar:(id)arg1 ;
-(void)localizeSegmentedControl:(id)arg1 ;
-(void)localizeAccessibility:(id)arg1 ;
-(void)localizeButton:(id)arg1 ;
-(void)dealloc;
-(void)awakeFromNib;
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(id)localizedStringForString:(id)arg1 ;
@end
