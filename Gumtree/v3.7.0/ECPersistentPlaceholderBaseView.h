/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECValidatingView.h>

@class NSString, CATextLayer, NSAttributedString;

@interface ECPersistentPlaceholderBaseView : ECValidatingView {

	BOOL _movesPlaceholderToTop;
	BOOL _placeholderAtTop;
	NSString* _editingPlaceholder;
	NSString* _invalidPlaceholder;
	NSString* _placeholder;
	/*^block*/id _placeholderBlock;
	CATextLayer* _placeholderLayer;
	/*^block*/id _valueChangedHandler;
	CGPoint _placeholderOffset;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) NSAttributedString * attributedPlaceholder; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSString * editingPlaceholder;                               //@synthesize editingPlaceholder=_editingPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * invalidPlaceholder;                               //@synthesize invalidPlaceholder=_invalidPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL movesPlaceholderToTop;                                //@synthesize movesPlaceholderToTop=_movesPlaceholderToTop - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                      //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) BOOL placeholderAtTop;                                     //@synthesize placeholderAtTop=_placeholderAtTop - In the implementation block
@property (nonatomic,copy) id placeholderBlock;                                         //@synthesize placeholderBlock=_placeholderBlock - In the implementation block
@property (nonatomic,retain) CATextLayer * placeholderLayer;                            //@synthesize placeholderLayer=_placeholderLayer - In the implementation block
@property (assign,nonatomic) CGPoint placeholderOffset;                                 //@synthesize placeholderOffset=_placeholderOffset - In the implementation block
@property (nonatomic,copy) id valueChangedHandler;                                      //@synthesize valueChangedHandler=_valueChangedHandler - In the implementation block
@property (nonatomic,retain) id value; 
-(void)valueDidChange:(id)arg1 ;
-(void)setMovesPlaceholderToTop:(BOOL)arg1 ;
-(void)setPlaceholderOffset:(CGPoint)arg1 ;
-(void)valueDidEndEditing:(id)arg1 ;
-(void)valueDidBeginEditing:(id)arg1 ;
-(CGPoint)computedContentViewOrigin;
-(CGPoint)placeholderOffset;
-(BOOL)placeholderAtTop;
-(void)addContentView;
-(void)moveContentView;
-(BOOL)shouldShowPlaceholderAtTop;
-(void)animateUpdates;
-(void)setInvalidPlaceholder:(NSString *)arg1 ;
-(CATextLayer *)placeholderLayer;
-(double)placeholderFontSize;
-(void)setPlaceholderBlock:(id)arg1 ;
-(void)setEditingPlaceholder:(NSString *)arg1 ;
-(void)updatePlaceholderDisplay;
-(id)placeholderBlock;
-(NSString *)editingPlaceholder;
-(NSString *)invalidPlaceholder;
-(id)displayPlaceholder;
-(BOOL)movesPlaceholderToTop;
-(void)setPlaceholderAtTop:(BOOL)arg1 ;
-(void)setPlaceholderLayer:(CATextLayer *)arg1 ;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(void)commonInit;
-(BOOL)isAccessibilityElement;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(NSAttributedString *)attributedPlaceholder;
-(unsigned long long)placeholderStyle;
-(id)placeholderColor;
@end
