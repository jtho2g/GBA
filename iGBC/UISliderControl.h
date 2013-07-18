/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class UIImage, UIView;

@interface UISliderControl : UIControl
{
    UIImage *_sliderLeftFillCap;
    /*CDAnonymousUnion1*/id _sliderLeftFill;
    /*CDAnonymousUnion1*/id _sliderRightFill;
    UIImage *_minValueImage;
    UIImage *_maxValueImage;
    int _numberOfTickMarks;
    float _hitOffset;
    UIImage *_sliderRightCap;
    UIImage *_sliderRightFullCap;
    UIImage *_sliderLeftCap;
    unsigned int _allowsOnlyTickMarks:1;
    unsigned int _animating:1;
    unsigned int _alternateColors:1;
    unsigned int _showValue:1;
    unsigned int _layeredFill:1;
    unsigned int _continuous:1;
    unsigned int _shouldFlipValue:1;
    unsigned int _needsNonOpaqueFills:1;
    unsigned int _reserved:24;
    float _value;
    float _minValue;
    float _maxValue;
    UIView *_knob;
}

- (void)_controlMouseDown:(struct __GSEvent *)fp8;	// IMP=0x3244a524
- (void)_controlMouseDragged:(struct __GSEvent *)fp8;	// IMP=0x3244a52c
- (void)_controlMouseUp:(struct __GSEvent *)fp8;	// IMP=0x3244a528
- (void)_resetFillFrames;	// IMP=0x324494b4
- (void)_sendDelayedActions;	// IMP=0x32449d18
- (void)_setValue:(float)fp8 andSendAction:(BOOL)fp12;	// IMP=0x3244b598
- (void)_sliderBounds:(struct CGRect)fp8 getLeftCapRect:(struct CGRect *)fp24 rightCapRect:(struct CGRect *)fp28 left:(struct CGRect *)fp32 right:(struct CGRect *)fp36;	// IMP=0x3244b20c
- (void)animator:(id)fp8 stopAnimation:(id)fp12;	// IMP=0x32449ccc
- (BOOL)beginTrackingAt:(struct CGPoint)fp8 withEvent:(struct __GSEvent *)fp16;	// IMP=0x3244ad24
- (BOOL)cancelMouseTracking;	// IMP=0x3244a498
- (BOOL)continueTrackingAt:(struct CGPoint)fp8 previous:(struct CGPoint)fp16 withEvent:(struct __GSEvent *)fp24;	// IMP=0x3244aa88
- (id)createSliderKnobView;	// IMP=0x32449404
- (void)dealloc;	// IMP=0x32449718
- (void)drawRect:(struct CGRect)fp8;	// IMP=0x3244a634
- (void)drawSliderInRect:(struct CGRect)fp8;	// IMP=0x32449c6c
- (void)drawSliderInRect:(struct CGRect)fp8 dirtyRect:(struct CGRect)fp24;	// IMP=0x324499f8
- (void)drawSliderPiece:(int)fp8 inRect:(struct CGRect)fp12;	// IMP=0x32449880
- (void)endTrackingAt:(struct CGPoint)fp8 previous:(struct CGPoint)fp16 withEvent:(struct __GSEvent *)fp24;	// IMP=0x3244ab0c
- (struct CGRect)fillBounds;	// IMP=0x32449594
- (id)imageForSliderPiece:(int)fp8;	// IMP=0x324497dc
- (id)init;	// IMP=0x324490a8
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x32449118
- (id)initWithFrame:(struct CGRect)fp8 layeredFill:(BOOL)fp24;	// IMP=0x32449174
- (BOOL)isAnimatingValueChange;	// IMP=0x32449dac
- (struct CGRect)maxValueImageBounds;	// IMP=0x3244afb0
- (struct CGRect)minValueImageBounds;	// IMP=0x3244b104
- (void)refreshImages;	// IMP=0x3244b9b8
- (void)setAllowsTickMarkValuesOnly:(BOOL)fp8;	// IMP=0x3244a1d0
- (void)setContinuous:(BOOL)fp8;	// IMP=0x3244a530
- (void)setEnabled:(BOOL)fp8;	// IMP=0x3244a374
- (void)setHighlighted:(BOOL)fp8;	// IMP=0x3244a418
- (void)setMaxValue:(float)fp8;	// IMP=0x3244a174
- (void)setMaxValueImage:(id)fp8;	// IMP=0x3244a2f0
- (void)setMinValue:(float)fp8;	// IMP=0x3244a120
- (void)setMinValueImage:(id)fp8;	// IMP=0x3244a26c
- (void)setNumberOfTickMarks:(int)fp8;	// IMP=0x3244a1c8
- (void)setShowValue:(BOOL)fp8;	// IMP=0x3244a1e8
- (void)setValue:(float)fp8;	// IMP=0x32449d8c
- (void)setValue:(float)fp8 animated:(BOOL)fp12;	// IMP=0x32449fb8
- (void)setValue:(float)fp8 animated:(BOOL)fp12 animationCurve:(int)fp16;	// IMP=0x32449dbc
- (struct CGRect)sliderBounds;	// IMP=0x32449ff0
- (void)sliderBoundsChanged;	// IMP=0x324496c4
- (float)value;	// IMP=0x32449fe8
- (struct CGRect)valueTextBounds;	// IMP=0x3244aee4

@end

