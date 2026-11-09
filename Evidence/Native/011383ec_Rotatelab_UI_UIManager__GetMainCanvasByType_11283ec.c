/* IL2CPP: Rotatelab.UI.UIManager$$GetMainCanvasByType
Rotatelab_UI_MainCanvasBase_o* Rotatelab_UI_UIManager__GetMainCanvasByType (Rotatelab_UI_UIManager_o* __this, int32_t mainCanvasType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.UI.UIManager$$GetMainCanvasByType
   Rotatelab_UI_MainCanvasBase_o* Rotatelab_UI_UIManager__GetMainCanvasByType
   (Rotatelab_UI_UIManager_o* __this, int32_t mainCanvasType, const MethodInfo* method); */

int Rotatelab_UI_UIManager__GetMainCanvasByType_11283ec(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  uVar1 = 0;
  while( true ) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar1) {
      return 0;
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar2 = *(int *)(iVar3 + 0x10 + uVar1 * 4);
    if (iVar2 == 0) break;
    uVar1 = uVar1 + 1;
    if (*(int *)(iVar2 + 0x10) == param_2) {
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

