/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class FBUFIButtonRowVariantGenerator;

@interface FBUFIButtonRowComponent : CKComponent {

	FBUFIButtonRowVariantGenerator* _variantGenerator;
	map<unsigned long, void ()(UIView *), std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, void ()(UIView *)> > >* _nuxDisplayBlocks;
	CKComponentLayout* _variantLayout;

}

@property (assign,nonatomic) CKComponentLayout variantLayout;                 //@synthesize variantLayout=_variantLayout - In the implementation block
@property (assign,nonatomic) map<unsigned long nuxDisplayBlocks;              //@synthesize nuxDisplayBlocks=_nuxDisplayBlocks - In the implementation block
+(id)newWithItems:(const vector<FBUFIButtonRowItem, std::__1::allocator<FBUFIButtonRowItem> >*)arg1 theme:(id)arg2 buttonEdgeInsetsOverride:(id)arg3 buttonTapEdgeInsetsOverride:(id)arg4 titleInsetsOverride:(id)arg5 layoutMode:(unsigned long long)arg6 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(MountResult*)mountInContext:(const MountContext*)arg1 size:(CGSize)arg2 children:(shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > >*)arg3 supercomponent:(id)arg4 ;
-(void)unmount;
-(CKComponentLayout)variantLayout;
-(void)setVariantLayout:(CKComponentLayout)arg1 ;
-(map<unsigned long)nuxDisplayBlocks;
-(void)setNuxDisplayBlocks:(map<unsigned long)arg1 ;
@end
