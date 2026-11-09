/* IL2CPP: Rotatelab.Networking.SatoriObjectFlag$$RefreshValue
void Rotatelab_Networking_SatoriObjectFlag__RefreshValue (Rotatelab_Networking_SatoriObjectFlag_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriObjectFlag$$RefreshValue
   void Rotatelab_Networking_SatoriObjectFlag__RefreshValue
   (Rotatelab_Networking_SatoriObjectFlag_o* __this, const MethodInfo* method); */

int Rotatelab_Networking_SatoriObjectFlag__RefreshValue_fe8af8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar8 = (char *)(_UNK_00ff8b9c + 0xff8b0c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8ba0 + 0xff8b20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8ba4 + 0xff8b2c));
    *pcVar8 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00ff8ba8 + 0xff8b40));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_RemoteConfigManager__GetSatoriFlag_object__1595a34
                    (iVar1,param_1[2],0,**(undefined4 **)(_UNK_00ff8bac + 0xff8b6c));
  iVar2 = System_String__IsNullOrEmpty_2a0a844(iVar1,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  pcVar8 = (char *)(_UNK_0369e448 + 0x369e2d4);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0369e44c + 0x369e2e8),param_1,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0369e450 + 0x369e2f4));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0369e454 + 0x369e300));
    *pcVar8 = '\x01';
  }
  iVar2 = System_String__IsNullOrEmpty_2a0a844(iVar1,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (param_1 != (int *)0x0) {
    uVar4 = (uint)*(byte *)(*param_1 + 0xb8);
    uVar7 = (uint)*(byte *)(**(int **)(_UNK_0369e464 + 0x369e330) + 0xb8);
    if (uVar7 <= uVar4) {
      iVar2 = *(int *)(*param_1 + 100);
      if (*(int *)(iVar2 + uVar7 * 4 + -4) == **(int **)(_UNK_0369e464 + 0x369e330)) {
        uVar7 = (uint)*(byte *)(**(int **)(_UNK_0369e468 + 0x369e364) + 0xb8);
        if ((uVar4 < uVar7) ||
           (*(int *)(iVar2 + uVar7 * 4 + -4) != **(int **)(_UNK_0369e468 + 0x369e364))) {
          uVar7 = (uint)*(byte *)(**(int **)(_UNK_0369e46c + 0x369e38c) + 0xb8);
          if ((uVar4 < uVar7) ||
             (*(int *)(iVar2 + uVar7 * 4 + -4) != **(int **)(_UNK_0369e46c + 0x369e38c))) {
            thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0369e470 + 0x369e408));
            uVar3 = thunk_FUN_00f00cdc();
            uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0369e474 + 0x369e41c));
            System_ArgumentException___ctor_2b113a4(uVar3,uVar5,0);
            goto LAB_0369e42c;
          }
        }
      }
    }
    uVar5 = System_Object__GetType_2bb9c9c(param_1,0);
    pcVar8 = (char *)(_UNK_0369de9c + 0x369dcf0);
    if (*pcVar8 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0369dea0 + 0x369dd04));
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0369dea4 + 0x369dd10));
      *pcVar8 = '\x01';
    }
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    if (iVar1 == 0) {
      uStack_2c = 0;
      uStack_30 = 0;
    }
    else if (*(int *)(iVar1 + 8) == 0) {
      uVar3 = System_UIntPtr__op_Explicit_2bd42b0(1,0,0);
      uVar3 = System_UIntPtr__op_Explicit_2bd42dc(uVar3,0);
      uStack_1c = 0;
      uStack_20 = 0;
      UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_20,uVar3,0,0);
      uStack_30 = uStack_20;
      uStack_2c = uStack_1c;
    }
    else {
      pcVar8 = (char *)(_UNK_0369dea8 + 0x369dd4c);
      if (*pcVar8 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0369deac + 0x369dd60));
        *pcVar8 = '\x01';
      }
      uStack_28 = System_String__GetRawStringData_2a07d18(iVar1,0);
      uStack_24 = *(undefined4 *)(iVar1 + 8);
      uVar3 = System_ReadOnlySpan_char___GetPinnableReference_1a0c144
                        (&uStack_28,**(undefined4 **)(_UNK_0369deb0 + 0x369dd80));
      UnityEngine_Bindings_ManagedSpanWrapper___ctor_361b8f8(&uStack_30,uVar3,uStack_24,0);
    }
    pcVar6 = *(code **)(_UNK_0369deb4 + 0x369de08);
    if (pcVar6 == (code *)0x0) {
      pcVar6 = (code *)thunk_FUN_00ec3774(_UNK_0369deb8 + 0x369de18);
      *(code **)(_UNK_0369debc + 0x369de28) = pcVar6;
    }
    iVar1 = (*pcVar6)(&uStack_30,param_1,uVar5);
    return iVar1;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0369e458 + 0x369e3d4));
  uVar3 = thunk_FUN_00f00cdc();
  uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0369e45c + 0x369e3e8));
  System_ArgumentNullException___ctor_2b08d00(uVar3,uVar5,0);
LAB_0369e42c:
  uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0369e460 + 0x369e438));
  FUN_01f4fe28(uVar3,uVar5);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

