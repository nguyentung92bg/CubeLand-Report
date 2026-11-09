/* IL2CPP: Rotatelab.Scripts.PropellerController.<>c__DisplayClass11_0$$<AnimateHit>b__2
void Rotatelab_Scripts_PropellerController___c__DisplayClass11_0___AnimateHit_b__2 (Rotatelab_Scripts_PropellerController___c__DisplayClass11_0_o* __this, Rotatelab_Scripts_PropellerController_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PropellerController.<>c__DisplayClass11_0$$<AnimateHit>b__2
   void Rotatelab_Scripts_PropellerController___c__DisplayClass11_0___AnimateHit_b__2
   (Rotatelab_Scripts_PropellerController___c__DisplayClass11_0_o* __this,
   Rotatelab_Scripts_PropellerController_o* this, const MethodInfo* method); */

void Rotatelab_Scripts_PropellerController___c__DisplayClass11_0___AnimateHit_b__2_104d7b0
               (int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 auStack_24 [12];
  
  pcVar3 = (char *)(_UNK_0105d81c + 0x105d7c4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105d820 + 0x105d7d8));
    *pcVar3 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0105d824 + 0x105d7ec));
  iVar5 = *(int *)(param_1 + 0xc);
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(_UNK_0103f21c + 0x103f038);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f220 + 0x103f04c),iVar5,iVar7,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f224 + 0x103f058));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f228 + 0x103f064));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103f22c + 0x103f070));
    *pcVar3 = '\x01';
  }
  if (*(int *)(iVar2 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___Remove_267f138
            (*(int *)(iVar2 + 0x7c),iVar5,**(undefined4 **)(_UNK_0103f230 + 0x103f098));
  uVar4 = *(undefined4 *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(_UNK_0103f234 + 0x103f0ac) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
  if (iVar2 == 0) {
    iVar2 = 0;
    if (iVar7 != 0) {
      iVar2 = *(int *)(iVar7 + 0xc);
    }
    if (iVar7 != 0 && iVar2 != 0) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = UnityEngine_Component__get_transform_35fe190(iVar5,0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_position_36149b0(auStack_24,iVar2,0);
      puVar6 = *(undefined4 **)(_UNK_0103f238 + 0x103f134);
      iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                        (iVar7,*(int *)(iVar7 + 0xc) + -1,*puVar6);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = UnityEngine_Component__get_transform_35fe190(iVar2,0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_position_36149b0(auStack_24,iVar2,0);
      pcVar3 = (char *)(_UNK_0103f23c + 0x103f18c);
      if (*pcVar3 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0103f240 + 0x103f1a0));
        *pcVar3 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_0103f244 + 0x103f1b4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      if (0 < *(int *)(iVar7 + 0xc)) {
        iVar2 = 0;
        do {
          piVar1 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                    (iVar7,iVar2,*puVar6);
          if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          (**(code **)(*piVar1 + 0x118))(piVar1,*(undefined4 *)(*piVar1 + 0x11c));
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(iVar7 + 0xc));
      }
    }
  }
  return;
}

