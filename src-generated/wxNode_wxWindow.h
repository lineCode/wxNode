
#ifndef _wxNode_wxWindow_h_
#define _wxNode_wxWindow_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxWindow;
class wxNode_wxPoint;
class wxNode_wxSize;
class wxNode_wxRect;
class wxNode_wxScrollHelper;
class wxNode_wxKeyEvent;
class wxNode_wxEvent;
class wxNode_wxValidator;
class wxNode_wxAcceleratorTable;
class wxNode_wxDC;
class wxNode_wxColour;
class wxNode_wxFont;
class wxNode_wxCursor;
class wxNode_wxCaret;
class wxNode_wxUpdateUIEvent;
class wxNode_wxMenu;
class wxNode_wxToolTip;
class wxNode_wxDropTarget;
class wxNode_wxLayoutConstraints;
class wxNode_wxSizer;
class wxNode_wxIdleEvent;
class wxNode_wxPalette;


class wxNode_wxWindow : public wxWindow, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxWindow* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxWindow* obj);
  static v8::Handle<v8::Value> NewCopy(const wxWindow& obj);

  
  
  wxNode_wxWindow();
  
  wxNode_wxWindow(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style, const wxString& name);
  
  wxNode_wxWindow(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style);
  
  wxNode_wxWindow(wxWindow* parent, int id, wxPoint& pos, wxSize& size);
  
  wxNode_wxWindow(wxWindow* parent, int id, wxPoint& pos);
  
  wxNode_wxWindow(wxWindow* parent, int id);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Close(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Destroy(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DestroyChildren(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsBeingDeleted(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetName(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetName(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetWindowVariant(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetWindowVariant(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetLayoutDirection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetLayoutDirection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AdjustForLayoutDirection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _NewControlId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _UnreserveControlId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Move(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetPosition(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Raise(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Lower(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetClientSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetPosition(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetScreenPosition(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClientSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetRect(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetScreenRect(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClientAreaOrigin(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClientRect(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ClientToWindowSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _WindowToClientSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBestSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetScrollHelper(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetScrollHelper(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InvalidateBestSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CacheBestSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetEffectiveMinSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetInitialSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Centre(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Center(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CentreOnParent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CenterOnParent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Fit(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FitInside(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetSizeHints(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMinSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMaxSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMinClientSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMaxClientSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMinSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMaxSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMinClientSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMaxClientSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMinWidth(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMinHeight(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMaxWidth(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMaxHeight(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetVirtualSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetVirtualSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DoSetVirtualSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DoGetVirtualSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBestVirtualSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetWindowBorderSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InformFirstDirection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SendSizeEvent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SendSizeEventToParent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PostSizeEvent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PostSizeEventToParent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Show(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Hide(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ShowWithEffect(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HideWithEffect(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Enable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Disable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsShown(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsEnabled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsThisEnabled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsShownOnScreen(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetWindowStyleFlag(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetWindowStyleFlag(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetWindowStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetWindowStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasFlag(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsRetained(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ToggleWindowStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetExtraStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetExtraStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasExtraStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _MakeModal(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetThemeEnabled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetThemeEnabled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetFocus(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetFocusFromKbd(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindFocus(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DoFindFocus(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasFocus(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AcceptsFocus(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AcceptsFocusRecursively(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AcceptsFocusFromKeyboard(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanBeFocused(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsFocusable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanAcceptFocus(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanAcceptFocusFromKeyboard(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetCanFocus(const v8::Arguments& args);
  static v8::Handle<v8::Value> _NavigateIn(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Navigate(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HandleAsNavigationKey(const v8::Arguments& args);
  static v8::Handle<v8::Value> _MoveBeforeInTabOrder(const v8::Arguments& args);
  static v8::Handle<v8::Value> _MoveAfterInTabOrder(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetChildren(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetWindowChildren(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetPrevSibling(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetNextSibling(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetParent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetGrandParent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsTopLevel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetParent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Reparent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AddChild(const v8::Arguments& args);
  static v8::Handle<v8::Value> _RemoveChild(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsClientAreaChild(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindWindow(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindWindowById(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindWindowByName(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindWindowByLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetEventHandler(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetEventHandler(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PushEventHandler(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PopEventHandler(const v8::Arguments& args);
  static v8::Handle<v8::Value> _RemoveEventHandler(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ProcessWindowEvent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ProcessWindowEventLocally(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HandleWindowEvent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetNextHandler(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetPreviousHandler(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetValidator(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetValidator(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Validate(const v8::Arguments& args);
  static v8::Handle<v8::Value> _TransferDataToWindow(const v8::Arguments& args);
  static v8::Handle<v8::Value> _TransferDataFromWindow(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InitDialog(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetAcceleratorTable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetAcceleratorTable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ConvertPixelsToDialog(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ConvertDialogToPixels(const v8::Arguments& args);
  static v8::Handle<v8::Value> _WarpPointer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CaptureMouse(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ReleaseMouse(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetCapture(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasCapture(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Refresh(const v8::Arguments& args);
  static v8::Handle<v8::Value> _RefreshRect(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Update(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ClearBackground(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Freeze(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Thaw(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsFrozen(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PrepareDC(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsDoubleBuffered(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetUpdateRegion(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetUpdateClientRect(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DoIsExposed(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsExposed(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetDefaultAttributes(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassDefaultAttributes(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetBackgroundColour(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetOwnBackgroundColour(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBackgroundColour(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InheritsBackgroundColour(const v8::Arguments& args);
  static v8::Handle<v8::Value> _UseBgCol(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetForegroundColour(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetOwnForegroundColour(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetForegroundColour(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetBackgroundStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBackgroundStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasTransparentBackground(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetFont(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetOwnFont(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetFont(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetCursor(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetCursor(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetCaret(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetCaret(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetCharHeight(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetCharWidth(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetTextExtent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ClientToScreen(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ScreenToClient(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HitTest(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBorder(const v8::Arguments& args);
  static v8::Handle<v8::Value> _UpdateWindowUI(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DoUpdateWindowUI(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PopupMenu(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetPopupMenuSelectionFromUser(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasMultiplePages(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanScroll(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasScrollbar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetScrollbar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetScrollPos(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetScrollPos(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetScrollThumb(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetScrollRange(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ScrollWindow(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ScrollLines(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ScrollPages(const v8::Arguments& args);
  static v8::Handle<v8::Value> _LineUp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _LineDown(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PageUp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PageDown(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AlwaysShowScrollbars(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsScrollbarAlwaysShown(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetHelpText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetHelpText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetToolTip(const v8::Arguments& args);
  static v8::Handle<v8::Value> _UnsetToolTip(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolTip(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolTipText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CopyToolTip(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetDropTarget(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetDropTarget(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DragAcceptFiles(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetConstraints(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetConstraints(const v8::Arguments& args);
  static v8::Handle<v8::Value> _UnsetConstraints(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetConstraintsInvolvedIn(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AddConstraintReference(const v8::Arguments& args);
  static v8::Handle<v8::Value> _RemoveConstraintReference(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DeleteRelatedConstraints(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ResetConstraints(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetConstraintSizes(const v8::Arguments& args);
  static v8::Handle<v8::Value> _LayoutPhase1(const v8::Arguments& args);
  static v8::Handle<v8::Value> _LayoutPhase2(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DoPhase(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetSizeConstraint(const v8::Arguments& args);
  static v8::Handle<v8::Value> _MoveConstraint(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSizeConstraint(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClientSizeConstraint(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetPositionConstraint(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetAutoLayout(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetAutoLayout(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Layout(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetSizer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetSizerAndFit(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSizer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetContainingSizer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetContainingSizer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetTransparent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanSetTransparent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnSysColourChanged(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnInitDialog(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnMiddleClick(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnHelp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnInternalIdle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SendIdleEvents(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetHandle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DissociateHandle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetPalette(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetPalette(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasCustomPalette(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetAncestorWithCustomPalette(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InheritAttributes(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ShouldInheritColours(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanBeOutsideClientArea(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanApplyThemeBorder(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMainWindowOfCompositeControl(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsTopNavigationDomain(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
