/* IL2CPP: Rotatelab.UI.PointerPressEventListener.PointerEvent$$.ctor
void Rotatelab_UI_PointerPressEventListener_PointerEvent___ctor (Rotatelab_UI_PointerPressEventListener_PointerEvent_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PointerPressEventListener.PointerEvent$$.ctor
   void Rotatelab_UI_PointerPressEventListener_PointerEvent___ctor
   (Rotatelab_UI_PointerPressEventListener_PointerEvent_o* __this, Il2CppObject* object, intptr_t
   method, const MethodInfo* method); */

void Rotatelab_UI_PointerPressEventListener_PointerEvent___ctor_1110d58
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
        uVar3 = thunk_FUN_00f08324(0,_UNK_01120e84 + 0x1120dcc);
        func_0x00ec3920(uVar3,0);
      }
      goto LAB_01120dd4;
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      iVar2 = _UNK_01120e80 + 0x1120e30;
    }
    else {
      iVar2 = thunk_FUN_00f0f330(param_3);
      iVar4 = FUN_00ec3ea0(param_3);
      if (iVar2 == 0) {
        if (iVar4 == 0) {
          iVar2 = _UNK_01120e7c + 0x1120e5c;
        }
        else {
          iVar2 = _UNK_01120e78 + 0x1120e44;
        }
      }
      else if (iVar4 == 0) {
        iVar2 = _UNK_01120e74 + 0x1120e50;
      }
      else {
        iVar2 = _UNK_01120e70 + 0x1120e24;
      }
    }
  }
  else {
    if (cVar1 != '\x01') {
LAB_01120dd4:
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x10);
      goto LAB_01120e5c;
    }
    iVar2 = _UNK_01120e6c + 0x1120dac;
  }
  *(int *)(param_1 + 0xc) = iVar2;
LAB_01120e5c:
  *(int *)(param_1 + 0x1c) = _UNK_01120e88 + 0x1120e68;
  return;
}

