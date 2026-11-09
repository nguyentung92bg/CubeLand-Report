/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$<UpdateProgressionCoroutine>b__51_2
void Rotatelab_CloudRush_CloudRushManager___UpdateProgressionCoroutine_b__51_2 (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$<UpdateProgressionCoroutine>b__51_2
   void Rotatelab_CloudRush_CloudRushManager___UpdateProgressionCoroutine_b__51_2
   (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager___UpdateProgressionCoroutine_b__51_2_10e1dd0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  
  if (*(int *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = AssetKits_ParticleImage_ParticleImage__get_main_2cce5f0(*(int *)(param_1 + 0x68),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = 0x2ef8;
  pcVar7 = (char *)(_UNK_02ce09c0 + 0x2ce0848);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02ce09c4 + 0x2ce085c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_02ce09c8 + 0x2ce0868));
    *pcVar7 = '\x01';
  }
  iVar2 = AssetKits_ParticleImage_ParticleImage__get_isMain_2cce7c8(iVar1);
  if (iVar2 != 0) {
    iVar6 = *(int *)(iVar1 + 0x84);
  }
  if ((iVar2 != 0 && iVar6 != 0) && (uVar5 = *(uint *)(iVar6 + 0xc), 0 < (int)uVar5)) {
    uVar8 = 0;
    do {
      if (uVar5 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar2 = *(int *)(iVar6 + 0x10 + uVar8 * 4);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      AssetKits_ParticleImage_ParticleImage__DoPlay_2cd0830(iVar2);
      uVar5 = *(uint *)(iVar6 + 0xc);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar5);
  }
  iVar6 = 0;
  *(undefined4 *)(iVar1 + 0x2fa8) = 0;
  *(undefined4 *)(iVar1 + 0x2f94) = 0;
  *(float *)(iVar1 + 0x2fa0) = 1.0 / *(float *)(iVar1 + 0x2ef8);
  puVar10 = *(undefined4 **)(_UNK_02ce09cc + 0x2ce08b8);
  while( true ) {
    if (*(int *)(iVar1 + 0x2f04) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar1 + 0x2f04) + 0xc) <= iVar6) break;
    if (*(int *)(iVar1 + 0x2f04) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar1 + 0x2f04),iVar6,*puVar10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar2 + 0x10) = 0;
  }
  *(undefined4 *)(iVar1 + 0x2fce) = 0x101;
  if (*(char *)(iVar1 + 0xe5) != '\0') {
    AssetKits_ParticleImage_ParticleImage__Prewarm_2cd09d0(iVar1);
  }
  if (*(int *)(iVar1 + 0xac) == 1) {
    uVar3 = UnityEngine_Time__get_deltaTime_36109f8(0);
  }
  else {
    uVar3 = UnityEngine_Time__get_unscaledDeltaTime_3610a80(0);
  }
  AssetKits_ParticleImage_ParticleImage__Simulate_2cd0aa0(iVar1,uVar3,*(undefined1 *)(iVar1 + 0xe5))
  ;
  iVar1 = *(int *)(iVar1 + 0x2fd4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_0362b3f8 + 0x362b270);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362b3fc + 0x362b284),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362b400 + 0x362b290));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362b404 + 0x362b29c));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362b408 + 0x362b2a8));
    *pcVar7 = '\x01';
  }
  iVar6 = UnityEngine_Events_UnityEventBase__PrepareInvoke_361af00(iVar1);
  piVar9 = (int *)(iVar1 + 0x14);
  iVar1 = 0;
  puVar10 = *(undefined4 **)(_UNK_0362b40c + 0x362b2d0);
  piVar11 = *(int **)(_UNK_0362b410 + 0x362b2d8);
  puVar12 = *(undefined4 **)(_UNK_0362b414 + 0x362b2e0);
  do {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar6 + 0xc) <= iVar1) {
      return;
    }
    piVar4 = (int *)System_Collections_Generic_List_object___get_Item_267d814(iVar6,iVar1,*puVar10);
    if (piVar4 == (int *)0x0) {
LAB_0362b338:
      piVar4 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                (iVar6,iVar1,*puVar10);
      if (piVar4 != (int *)0x0) {
        iVar2 = *piVar11;
        uVar5 = (uint)*(byte *)(iVar2 + 0xb8);
        if ((uVar5 <= *(byte *)(*piVar4 + 0xb8)) &&
           (*(int *)(*(int *)(*piVar4 + 100) + uVar5 * 4 + -4) == iVar2)) goto LAB_0362b3e4;
      }
      piVar4 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                (iVar6,iVar1,*puVar10);
      iVar2 = *piVar9;
      if (iVar2 == 0) {
        iVar2 = thunk_FUN_00ec388c(*puVar12,0);
        *piVar9 = iVar2;
        thunk_FUN_00ec5080(piVar9,iVar2);
        iVar2 = *piVar9;
      }
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar4 + 0xe0))(piVar4,iVar2,*(undefined4 *)(*piVar4 + 0xe4));
    }
    else {
      iVar2 = *piVar11;
      uVar5 = (uint)*(byte *)(iVar2 + 0xb8);
      if ((*(byte *)(*piVar4 + 0xb8) < uVar5) ||
         (*(int *)(*(int *)(*piVar4 + 100) + uVar5 * 4 + -4) != iVar2)) goto LAB_0362b338;
LAB_0362b3e4:
      UnityEngine_Events_InvokableCall__Invoke_3618f24();
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

