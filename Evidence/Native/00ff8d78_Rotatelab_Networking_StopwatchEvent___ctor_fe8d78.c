/* IL2CPP: Rotatelab.Networking.StopwatchEvent$$.ctor
void Rotatelab_Networking_StopwatchEvent___ctor (Rotatelab_Networking_StopwatchEvent_o* __this, System_String_o* name, Rotatelab_Networking_StopwatchEvent_o* parent, bool autoStart, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.StopwatchEvent$$.ctor
   void Rotatelab_Networking_StopwatchEvent___ctor (Rotatelab_Networking_StopwatchEvent_o* __this,
   System_String_o* name, Rotatelab_Networking_StopwatchEvent_o* parent, bool autoStart, const
   MethodInfo* method); */

void Rotatelab_Networking_StopwatchEvent___ctor_fe8d78
               (int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  pcVar2 = (char *)(_UNK_00ff8fb0 + 0xff8d94);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8fb4 + 0xff8dac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8fb8 + 0xff8db8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8fbc + 0xff8dc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8fc0 + 0xff8dd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff8fc4 + 0xff8ddc));
    *pcVar2 = '\x01';
  }
  System_Object___ctor_2bb93bc(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 8),param_2);
  *(int *)(param_1 + 0xc) = param_3;
  thunk_FUN_00ec5080((int *)(param_1 + 0xc),param_3);
  *(undefined8 *)(param_1 + 0x10) = 0xbff0000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0xbff0000000000000;
  if (param_3 == 0) {
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff8fdc + 0xff8e50));
    System_Collections_Generic_List_object____ctor_267d2e8
              (iVar6,5,**(undefined4 **)(_UNK_00ff8fe0 + 0xff8e68));
    piVar4 = (int *)(param_1 + 0x20);
    *piVar4 = iVar6;
  }
  else {
    if (*(int *)(param_3 + 0x20) == 0) {
      uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff8fc8 + 0xff8e8c));
      System_Collections_Generic_List_object____ctor_267d2e8
                (uVar1,5,**(undefined4 **)(_UNK_00ff8fcc + 0xff8ea4));
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),uVar1);
      if (param_3 == 0) goto LAB_00ff8f88;
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_3 + 0x20);
      thunk_FUN_00ec5080();
    }
    piVar4 = (int *)(param_3 + 0x24);
    iVar6 = *piVar4;
    if (iVar6 == 0) {
      iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff8fd0 + 0xff8edc));
      System_Collections_Generic_List_object____ctor_267d2e8
                (iVar6,1,**(undefined4 **)(_UNK_00ff8fd4 + 0xff8ef4));
      *piVar4 = iVar6;
      thunk_FUN_00ec5080(piVar4,iVar6);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
    iVar3 = *(int *)(iVar6 + 8);
    uVar5 = *(uint *)(iVar6 + 0xc);
    piVar4 = *(int **)(_UNK_00ff8fd8 + 0xff8f3c);
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar5) {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar6,param_1,*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
      goto LAB_00ff8f88;
    }
    *(uint *)(iVar6 + 0xc) = uVar5 + 1;
    piVar4 = (int *)(iVar3 + uVar5 * 4 + 0x10);
    *piVar4 = param_1;
    iVar6 = param_1;
  }
  thunk_FUN_00ec5080(piVar4,iVar6);
LAB_00ff8f88:
  if ((param_4 != 0) && (*(double *)(param_1 + 0x10) < 0.0)) {
    uVar7 = UnityEngine_Time__get_realtimeSinceStartupAsDouble_360ca34(0);
    *(undefined8 *)(param_1 + 0x10) = uVar7;
  }
  return;
}

