/* IL2CPP: Rotatelab.Debugging.TestUserManager.<Start>d__15$$MoveNext
void Rotatelab_Debugging_TestUserManager__Start_d__15__MoveNext (Rotatelab_Debugging_TestUserManager__Start_d__15_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.TestUserManager.<Start>d__15$$MoveNext
   void Rotatelab_Debugging_TestUserManager__Start_d__15__MoveNext
   (Rotatelab_Debugging_TestUserManager__Start_d__15_o __this, const MethodInfo* method); */

void Rotatelab_Debugging_TestUserManager__Start_d__15__MoveNext_110f9cc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int *piStack_40;
  uint uStack_3c;
  undefined4 uStack_34;
  int *piStack_30;
  uint uStack_2c;
  
  pcVar8 = (char *)(_UNK_0111fe7c + 0x111f9e4);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111fe80 + 0x111f9f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111fe84 + 0x111fa04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111fe88 + 0x111fa10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111fe8c + 0x111fa1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111fe90 + 0x111fa28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111fe94 + 0x111fa34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111fe98 + 0x111fa40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111fe9c + 0x111fa4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111fea0 + 0x111fa58));
    *pcVar8 = '\x01';
  }
  iVar10 = param_1[2];
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_34 = 0;
  if (*param_1 == 0) {
    uStack_2c = param_1[4];
    piVar6 = (int *)param_1[3];
    *param_1 = -1;
    uVar9 = uStack_2c & 0xff;
    uVar5 = uStack_2c >> 0x10;
    param_1[3] = 0;
    param_1[4] = 0;
    piStack_30 = piVar6;
LAB_0111fc3c:
    if (piVar6 != (int *)0x0) {
      iVar1 = *(int *)(**(int **)(_UNK_0111feb8 + 0x111fc50) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x14);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piVar6;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_0111fcdc;
          }
          uVar9 = uVar9 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piVar6,iVar1,0);
LAB_0111fcdc:
      uVar9 = (*(code *)*puVar3)(piVar6,(int)(short)uVar5,puVar3[1]);
    }
  }
  else {
    iVar1 = UnityEngine_PlayerPrefs__GetInt_35f6dac(**(undefined4 **)(_UNK_0111fea4 + 0x111fa8c),0);
    if (iVar1 == 0xa8f) {
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Debugging_TestUserManager__SetTestUser_110f4e4(iVar10,1);
      goto LAB_0111fd60;
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0111fea8 + 0x111faf4));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_RemoteConfigManager__InitializeAsync_1074448(&piStack_40,iVar1,0);
    uVar5 = uStack_3c;
    piVar6 = piStack_40;
    uStack_3c = 0;
    piStack_40 = (int *)0x0;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_0111feac + 0x111fb2c) + 0x10) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    piStack_40 = piVar6;
    uStack_3c = uVar5;
    thunk_FUN_00ec5080(&piStack_40,0);
    uStack_2c = uStack_3c;
    piStack_30 = piStack_40;
    iVar1 = *(int *)(**(int **)(_UNK_0111feb0 + 0x111fb64) + 0x10);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    uVar9 = uStack_3c & 0xff;
    if (piStack_40 != (int *)0x0) {
      iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0xc) + 0x10);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768();
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      iVar2 = *piStack_40;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 200);
            goto LAB_0111fc1c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)FUN_00efdb38(piStack_40,iVar1,1);
LAB_0111fc1c:
      uVar5 = (int)uStack_3c >> 0x10;
      iVar1 = (*(code *)*puVar3)(piStack_40,uVar5,puVar3[1]);
      piVar6 = piStack_40;
      if (iVar1 == 0) {
        param_1[4] = uStack_3c;
        *param_1 = 0;
        param_1[3] = (int)piStack_40;
        thunk_FUN_00ec5080(param_1 + 3,0);
        func_0x01133a48(param_1 + 1,&piStack_30,param_1,**(undefined4 **)(_UNK_0111feb4 + 0x111fda4)
                       );
        return;
      }
      goto LAB_0111fc3c;
    }
  }
  if (uVar9 != 0) {
    if (*(int *)(**(int **)(_UNK_0111febc + 0x111fd04) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Application__get_platform_35a81fc(0);
    if (iVar1 == 0xb) {
      uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0111fec0 + 0x111fd30));
      System_Action_object____ctor_1f11414
                (uVar4,iVar10,**(undefined4 **)(_UNK_0111fec4 + 0x111fd44),0);
      AdjustSdk_Adjust__GetGoogleAdId_f8fc24(uVar4,0);
    }
  }
LAB_0111fd60:
  *param_1 = -2;
  func_0x00fcef34(param_1 + 1,0);
  return;
}

