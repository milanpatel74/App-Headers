/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/MNMontageColorSliderDelegate.h>
#import <Messenger/MNMontageComposerTextEditingOverlayDelegate.h>

@protocol MNMontageComposerOverlayViewDelegate;
@class MNMontageColorSlider, NSMutableArray, FBKeyboardObserver, UIPinchGestureRecognizer, UIRotationGestureRecognizer, MNMontageDragGestureRecognizer, UIView, POPAnimatableProperty, MNMontageComposerTextView, MNMontageComposerTextEditingOverlay, MNMontageComposerEditingState, NSString;

@interface MNMontageComposerOverlayView : UIView <FBKeyboardObserverDelegate, UITextViewDelegate, UIGestureRecognizerDelegate, MNMontageColorSliderDelegate, MNMontageComposerTextEditingOverlayDelegate> {

	MNMontageColorSlider* _textColorSlider;
	NSMutableArray* _artViews;
	FBKeyboardObserver* _keyboardObserver;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIRotationGestureRecognizer* _rotateGestureRecognizer;
	MNMontageDragGestureRecognizer* _dragGestureRecognizer;
	UIView* _drawingContainerView;
	BOOL _shouldPassThroughTouches;
	POPAnimatableProperty* _deletingAnimProp;
	double _deleteProgress;
	BOOL _isAnimatingDelete;
	MNMontageComposerTextView* _currentTypingTextView;
	BOOL _currentTextViewShouldBeFullWidth;
	MNMontageComposerTextEditingOverlay* _textEditingOverlay;
	CGRect _keyboardFrame;
	id<MNMontageComposerOverlayViewDelegate> _delegate;
	MNMontageComposerEditingState* _editingState;
	UIView* _drawingView;
	UIView* _manipulatingView;

}

@property (nonatomic,retain) UIView * manipulatingView;                                             //@synthesize manipulatingView=_manipulatingView - In the implementation block
@property (assign,nonatomic,__weak) id<MNMontageComposerOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNMontageComposerEditingState * editingState;                            //@synthesize editingState=_editingState - In the implementation block
@property (nonatomic,retain) UIView * drawingView;                                                  //@synthesize drawingView=_drawingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)resetContent;
-(void)setEditingState:(MNMontageComposerEditingState *)arg1 ;
-(void)setShouldPassThroughTouches:(BOOL)arg1 ;
-(void)addSticker:(id)arg1 ;
-(void)addArtItems:(id)arg1 ;
-(void)montageColorSliderColorChanged:(id)arg1 to:(id)arg2 ;
-(void)_updateDisplayState;
-(id)_manipulatableViewAtLocation:(CGPoint)arg1 ;
-(void)_clearAllContent;
-(id)_getMontageComposerArtViewItemForView:(id)arg1 ;
-(void)setManipulatingView:(UIView *)arg1 ;
-(void)_updateTextView:(id)arg1 ;
-(double)_displayScale;
-(double)_displayRotation;
-(void)_updateDrawingEnabled;
-(void)_updateTextColorSlider;
-(void)_updateKeyboardObservation;
-(void)_updateHandGestureRecognizers;
-(void)_updateAllTextViewsVisibilityAndPlaceholder;
-(void)_updateTextViewVisibilityAndPlaceholder:(id)arg1 ;
-(void)_layoutTextColorSlider;
-(void)_layoutTextViews;
-(CGRect)_textColorSliderFrameWithKeyboardFrame:(CGRect)arg1 ;
-(void)_reorderSubviewsForTextEditing:(id)arg1 ;
-(void)_deleteTextView:(id)arg1 ;
-(BOOL)_textWouldPassMaxNumLines:(id)arg1 inTextView:(id)arg2 ;
-(void)_saveTextViewState:(id)arg1 ;
-(CGPoint)_textViewCenterWithKeyboardFrame:(CGRect)arg1 ;
-(void)_restoreTextViewState:(id)arg1 ;
-(BOOL)_isManipulationGestureRecognizer:(id)arg1 ;
-(void)_bringTouchedViewToFront:(id)arg1 ;
-(BOOL)_isOtherDirectionManipulationRecognizerInAction:(id)arg1 ;
-(void)_updateManipulatingViewWithLocation:(CGPoint)arg1 ;
-(void)_saveManipulatingViewStateIfNeeded;
-(void)_animatePendingDeletionContent:(BOOL)arg1 ;
-(void)_deleteDraggedContent;
-(CGPoint)_displayTranslation;
-(UIView *)manipulatingView;
-(void)_updateEditingState;
-(void)addText;
-(MNMontageComposerEditingState *)editingState;
-(BOOL)allowsPanFromPoint:(CGPoint)arg1 ;
-(void)setDrawingView:(UIView *)arg1 ;
-(UIView *)drawingView;
-(void)montageComposerTextEditingOverlayDidTouchToDismiss:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNMontageComposerOverlayViewDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<MNMontageComposerOverlayViewDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)hasContent;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)_handleDrag:(id)arg1 ;
-(void)_updateKeyboard;
-(void)_updateUserInteractionEnabled;
-(void)_handlePinch:(id)arg1 ;
-(void)_handleRotation:(id)arg1 ;
@end
