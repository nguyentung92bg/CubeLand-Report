/* IL2CPP: Rotatelab.Scripts.InputManager$$Awake
void Rotatelab_Scripts_InputManager__Awake (Rotatelab_Scripts_InputManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.InputManager$$Awake
   void Rotatelab_Scripts_InputManager__Awake (Rotatelab_Scripts_InputManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_InputManager__Awake_10120e0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  
  pcVar4 = (char *)(_UNK_01022190 + 0x10220f4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022194 + 0x1022108));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022198 + 0x1022114));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102219c + 0x1022120));
    *pcVar4 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_010221a0 + 0x1022134));
  iVar5 = *(int *)(param_1 + 0x10);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010221a4 + 0x102214c));
  Rotatelab_UI_PointerPressEventListener_PointerEvent___ctor_1110d58
            (uVar1,param_1,**(undefined4 **)(_UNK_010221a8 + 0x1022168),0);
  if (iVar5 != 0) {
    pcVar4 = (char *)(_UNK_011209d0 + 0x1120954);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011209d4 + 0x1120968),uVar1,0);
      *pcVar4 = '\x01';
    }
    piVar6 = (int *)(iVar5 + 0x10);
    piVar8 = *(int **)(_UNK_011209d8 + 0x1120980);
    iVar5 = *piVar6;
    while( true ) {
      piVar2 = (int *)System_Delegate__Combine_2bbca94(iVar5,uVar1,0);
      piVar7 = (int *)0x0;
      if ((piVar2 != (int *)0x0) && (piVar7 = piVar2, *piVar2 != *piVar8)) break;
      iVar3 = FUN_00efd180(piVar6,piVar7,iVar5);
      bVar9 = iVar3 == iVar5;
      iVar5 = iVar3;
      if (bVar9) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

