/* IL2CPP: Rotatelab.UI.GenericDialog$$ShowWithinScopeWithNoButtons
System_IDisposable_o* Rotatelab_UI_GenericDialog__ShowWithinScopeWithNoButtons (Rotatelab_UI_GenericDialog_o* __this, System_String_o* title, System_String_o* message, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog$$ShowWithinScopeWithNoButtons
   System_IDisposable_o* Rotatelab_UI_GenericDialog__ShowWithinScopeWithNoButtons
   (Rotatelab_UI_GenericDialog_o* __this, System_String_o* title, System_String_o* message, const
   MethodInfo* method); */

undefined4
Rotatelab_UI_GenericDialog__ShowWithinScopeWithNoButtons_11111d8
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_011212ec + 0x11211f8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011212f0 + 0x112120c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011212f4 + 0x1121218));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011212f8 + 0x1121224));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011212fc + 0x1121230));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121300 + 0x112123c));
    *pcVar4 = '\x01';
  }
  uVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_01121304 + 0x1121254),0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01121308 + 0x1121268));
  Rotatelab_UI_GenericDialog_DialogData___ctor_1111318(uVar2,param_2,param_3,0,uVar1);
  Rotatelab_UI_GenericDialog__Show_1111378(param_1,uVar2);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112130c + 0x112129c));
  System_Action_object____ctor_1f11414(uVar1,param_1,**(undefined4 **)(_UNK_01121310 + 0x11212b8),0)
  ;
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01121314 + 0x11212cc));
  Rotatelab_UI_GenericDialog_DialogHandle___ctor_11117f8(uVar3,uVar2,uVar1);
  return uVar3;
}

