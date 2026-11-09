/* IL2CPP: Rotatelab.UI.PointerDragEventListener.PointerEvent$$.ctor
void Rotatelab_UI_PointerDragEventListener_PointerEvent___ctor (Rotatelab_UI_PointerDragEventListener_PointerEvent_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PointerDragEventListener.PointerEvent$$.ctor
   void Rotatelab_UI_PointerDragEventListener_PointerEvent___ctor
   (Rotatelab_UI_PointerDragEventListener_PointerEvent_o* __this, Il2CppObject* object, intptr_t
   method, const MethodInfo* method); */

void Rotatelab_UI_PointerDragEventListener_PointerEvent___ctor_11107f8
               (int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 4);
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x14) = param_3;
  thunk_FUN_00ec5080();
  cVar1 = *(char *)(param_3 + 0x2e);
  *(int *)(param_1 + 0x20) = param_1;
  iVar2 = FUN_00ec38a0(param_3);
  if (iVar2 == 0) {
    if (cVar1 != '\0') {
      if (param_2 == 0) {
        uVar3 = thunk_FUN_00f08324(0,_UNK_01120924 + 0x112086c);
        func_0x00ec3920(uVar3,0);
      }
      goto LAB_01120874;
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      iVar2 = _UNK_01120920 + 0x11208d0;
    }
    else {
      iVar2 = thunk_FUN_00f0f330(param_3);
      iVar4 = FUN_00ec3ea0(param_3);
      if (iVar2 == 0) {
        if (iVar4 == 0) {
          iVar2 = _UNK_0112091c + 0x11208fc;
        }
        else {
          iVar2 = _UNK_01120918 + 0x11208e4;
        }
      }
      else if (iVar4 == 0) {
        iVar2 = _UNK_01120914 + 0x11208f0;
      }
      else {
        iVar2 = _UNK_01120910 + 0x11208c4;
      }
    }
  }
  else {
    if (cVar1 != '\x01') {
LAB_01120874:
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
      goto LAB_011208fc;
    }
    iVar2 = _UNK_0112090c + 0x112084c;
  }
  *(int *)(param_1 + 0xc) = iVar2;
LAB_011208fc:
  *(int *)(param_1 + 0x1c) = _UNK_01120928 + 0x1120908;
  return;
}

